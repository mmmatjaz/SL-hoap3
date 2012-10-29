
#include <string.h>

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>

#include <arpa/inet.h>
#include <sys/stat.h>
#include <sys/time.h>

#define VISION_PORT 8992
#define KINECT_PORT 8995
#define MAX_BUFFER  10000

#define KINECT
// #define VISION

int sockfd = 0;
struct sockaddr_in vision_cli_addr, kinect_cli_addr;

int continue_communicating = 1;
int first_vision_packet_received = 0, first_kinect_packet_received = 0;

int kbhit(void);

static const char *fifo_name[] = {"VisionFIFO", "MotorFIFO", "KinectReaderFIFO", "KinectWriterFIFO"};
enum {VISION_WRITER = 0, MOTOR_READER, KINECT_READER, KINECT_WRITER, N_PIPES};

// Sends data from vision to robot
void *VisionWriterThread(void* file_name)
{
int fd, err;
struct sockaddr_in serv_addr;
socklen_t clilen;
char buffer[MAX_BUFFER];
int i, n, n_tmp, iof;
char ch;
struct timeval timeout;
fd_set fds;
int count = 0;

  // Open pipe for writing
  printf("Waiting for %s ... \n", (char *) file_name);
  fd = open((char *) file_name, O_WRONLY);
  if (fd > 0)
    printf("%s opened for writing, pipeID %d!\n", (char *) file_name, fd);
  else
  {
    printf("VisionWriterThread: couldn't open %s\n!", (char *) file_name);
    continue_communicating = 0;
    return NULL;
  }

  // Open socket for communication with DBvision 
  if (sockfd != 0)
    close(sockfd);
  sockfd = socket(AF_INET, SOCK_DGRAM, 0);
  if (sockfd < 0)
  { 
    printf("VisionWriterThread: error opening socket!\n");
    continue_communicating = 0;
    return NULL;
  }
  if ((iof = fcntl(sockfd, F_GETFL, 0)) != -1)
    fcntl(sockfd, F_SETFL, iof | O_NONBLOCK);

  memset((char *) &serv_addr, 0, sizeof(serv_addr));
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_port = htons(VISION_PORT);
  serv_addr.sin_addr.s_addr = INADDR_ANY; // inet_addr("192.168.6.100");

  if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
  {
    printf("VisionWriterThread: error on binding!\n");
    continue_communicating = 0;
    return NULL;
  }

  printf("VisionWriterThread socket connected! Local %s: %d\n",
         inet_ntoa(serv_addr.sin_addr), ntohs(serv_addr.sin_port));

  clilen = sizeof(vision_cli_addr);

  n = 1;
  do
  {
    if (n <= 0)
      printf("VisionWriterThread: Still waiting to receive vision data ... \n");

    // Set time limit for select.
    timeout.tv_sec = 1;
    timeout.tv_usec = 0;
    FD_ZERO(&fds);
    FD_SET(sockfd, &fds);
    n = select(sockfd+1, &fds, NULL, NULL, &timeout);

    if (kbhit())
    {
      ch = getchar();
      printf("\nVisionWriterThread: You pressed '%c'!\n", ch);
      if (ch == 'q')
      {
        printf("VisionWriterThread: Now exiting ...\n");
        close(sockfd); sockfd = 0;
        continue_communicating = 0;
        return 0;
      }
      else
        printf("\n");
    }
    
    if (n > 0)
    {
      if (!first_vision_packet_received)
      {
        n = recvfrom(sockfd, buffer, MAX_BUFFER, 0, (struct sockaddr *) &vision_cli_addr, &clilen);
        vision_cli_addr.sin_port = htons(VISION_PORT-1);
        first_vision_packet_received = 1;
      }
      else
        n = recvfrom(sockfd, buffer, MAX_BUFFER, 0, NULL, 0);

      err = write(fd, buffer, n);

      if ((count % 300) == 300)
      {
        printf("VisionWriterThread received data from vision: %d, data: ", n);
        for (i = 0; i < n; i++)
          printf("%c", buffer[i]);
        printf("\n");
      }
      count++;
    }
  }
  while (continue_communicating);

  if (sockfd != 0)
    close(sockfd);

  close(fd);

  printf("VisionWriterThread: now exiting ... \n");

  return NULL;
}

// Sends data from robot to vision
void *MotorReaderThread(void* file_name)
{
char buf[MAX_BUFFER];
int fd, i, j, n;
unsigned int count = 1;

struct timeval timeout;
fd_set fds;

socklen_t slen = sizeof(vision_cli_addr);
int sockfd;

double time;

  printf("Waiting for %s ... \n", (char *) file_name);
  fd = open((char *) file_name, O_RDONLY);
  if (fd > 0)
    printf("%s opened for reading!\n", (char *) file_name);
  else
  {
    printf("MotorReaderThread couldn't open %s!\n", (char *) file_name);
    continue_communicating = 0;
    return NULL;
  }

  if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1)
  {
    continue_communicating = 0; close(fd);
    return NULL;
  }

  do
  {
    // Set timeout
    timeout.tv_sec = 1;
    timeout.tv_usec = 0;
    FD_ZERO(&fds);
    FD_SET(fd, &fds);
    n = select(fd+1, &fds, NULL, NULL, &timeout);
    if (n > 0)
    {
      n = read(fd, buf, MAX_BUFFER);
      if (n < MAX_BUFFER)
      {
        j = -1;
        for (i = 0; i < n; i++)
          if (buf[i] == '<')
            j = i;
        if (j < 0)
        {
          n = 0;
          continue;
        }
        for (i = j+1; i < n; i++)
          if (buf[i] == '>')
            break;
        if (i == n || i == j + 1)
        {
          printf("MotorReaderThread: empty packet received, but will not be sent to vision!\n");
          n = 0;
          continue;
        }
        else
          n = i - j + 1;

        if (first_vision_packet_received)
        {
          // si_other.sin_addr = vision_cli_addr.sin_addr;
          if (sendto(sockfd, &(buf[j]), n, 0,
                     (struct sockaddr *) &vision_cli_addr, slen) == -1)
            printf("MotorReaderThread: could not send data via UDP!\n");
        }

        if ((count % 500) == 500)
        {
          if (i+1 < MAX_BUFFER)
          {
            buf[i+1] = '\0';
            sscanf(&(buf[j+1]), "%le", &time);
            printf("MotorReaderThread received data to send to vision (%d bytes): %s\n", n, &(buf[j]));
            printf("Current time: %lf\n", time);
          }
        }
        count++;
      }
    }
    /* else
      printf("Motor data not received!\n"); */
  }
  while (continue_communicating);

  if (sockfd != 0)
    close(sockfd);

  close(fd);

  printf("MotorReaderThread: Now exiting ... \n");

  return NULL;
}

// Sends data from robot to Kinect
void *KinectWriterThread(void* arg)
{
char buf[MAX_BUFFER];
int fd;
int i, j, n;

struct timeval timeout;
fd_set fds;
unsigned int count = 0;

int sockfd;
socklen_t slen = sizeof(kinect_cli_addr);

  printf("Waiting for %s ... \n", (char *) arg);

  fd = open((char *) arg, O_RDONLY);
  if (fd <= 0)
  {
    printf("Couldn't open %s\n", (char *) arg);
    continue_communicating = 0;
    return NULL;
  }
  else
    printf("%s opened for reading!\n", (char *) arg);

  if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1)
  {
    continue_communicating = 0;
    return NULL;
  }

  do
  {
    // Set timeout
    timeout.tv_sec = 3;
    timeout.tv_usec = 0;
    FD_ZERO(&fds);
    FD_SET(fd, &fds);
    n = select(fd+1, &fds, NULL, NULL, &timeout);
    if (n > 0)
    {
      n = read(fd, buf, MAX_BUFFER);
      j = -1;
      for (i = 0; i < n; i++)
        if (buf[i] == '<')
          j = i;
      if (j < 0)
      {
        n = 0;
        continue;
      }
      for (i = j+1; i < n; i++)
        if (buf[i] == '>')
           break;
      if (i == n || i == j + 1)
      {
        printf("Empty packet will not be sent to Kinect\n");
        n = 0;
        continue;
      }
      else
        n = i - j - 1;
      buf[i] = '\0';

      if (first_kinect_packet_received)
      {
        if (sendto(sockfd, &(buf[j+1]), n, 0, (struct sockaddr *) &kinect_cli_addr, slen) == -1)
          printf("KinectWriter could not send data via UDP!\n");
      }

      if ((count % 90) == 0)
        printf("KinectWriter received data to send to Kinect (%d bytes): %s\n", n, &(buf[j+1]));
      count++;
    }
    else
      printf("KinectWriter: no data received to send to Kinect ... \n");
  }
  while (continue_communicating);

  if (sockfd != 0)
    close(sockfd);

  close(fd);

  return NULL;
}

// Sends data from Kinect to robot
void *KinectReaderThread(void* file_name)
{
char buffer[MAX_BUFFER], *buffer_pt;;
int fd, err, n;

struct timeval timeout;
fd_set fds;
unsigned int count = 1;

struct sockaddr_in serv_addr;
int sockfd, iof, clilen;

// double JointPose[15][3][4], joint_angles[20];
double time;
int i, j, k;
char ch;

  printf("Waiting for %s ... \n", (char *) file_name);

  // Open pipe for communication with simulator
  fd = open((char *) file_name, O_WRONLY);
  if (fd > 0)
    printf("%s opened for writing, pipe ID %d!\n", (char *) file_name, fd);
  else
  {
    printf("KinectReaderThread: couldn't open %s!\n", (char *) file_name);
    continue_communicating = 0;
    return NULL;
  }

  // Open socket for communication with Kinect
  sockfd = socket(AF_INET, SOCK_DGRAM, 0);
  if (sockfd < 0)
  { 
    printf("KinectReaderThread: Error opening socket");
    continue_communicating = 0; close(fd);
    return NULL;
  }
  /* if ((iof = fcntl(sockfd, F_GETFL, 0)) != -1)
    fcntl(sockfd, F_SETFL, iof | O_NONBLOCK); */

  memset((char *) &serv_addr, 0, sizeof(serv_addr));
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_port = htons(KINECT_PORT);
  serv_addr.sin_addr.s_addr = INADDR_ANY; // inet_addr("192.168.6.100");

  if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
  {
    printf("KinectReaderThread: Error on binding!\n");
    continue_communicating = 0; close(fd); close(sockfd);
    return NULL;
  }

  printf("Socket for reading from Kinect connected! Local %s: %d\n",
         inet_ntoa(serv_addr.sin_addr), ntohs(serv_addr.sin_port));

  clilen = sizeof(kinect_cli_addr);

  do
  {
    // Set timeout
    timeout.tv_sec = 1;
    timeout.tv_usec = 0;
    FD_ZERO(&fds);
    FD_SET(sockfd, &fds);
    n = select(sockfd+1, &fds, NULL, NULL, &timeout);

    if (kbhit())
    {
      ch = getchar();
      printf("   You pressed '%c'!", ch);
      if (ch == 'q')
      {
        printf(" Now exiting ...\n");
        close(sockfd); sockfd = 0;
        continue_communicating = 0;
        return 0;
      }
      else
        printf("\n");
    }

    if (n > 0)
    {

      if (!first_kinect_packet_received)
      {
        n = recvfrom(sockfd, buffer, MAX_BUFFER, 0, (struct sockaddr *) &kinect_cli_addr, &clilen);
        printf("Received Kinect packet from %s:%d\n",
               inet_ntoa(kinect_cli_addr.sin_addr), ntohs(kinect_cli_addr.sin_port));
        kinect_cli_addr.sin_port = htons(KINECT_PORT+1);
        first_kinect_packet_received = 1;
      }
      else
        n = recvfrom(sockfd, buffer, MAX_BUFFER, 0, NULL, 0);

      err = write(fd, buffer, n);

      count++;
    }
    else
    {
      printf("KinectReaderThread: no data received from Kinect\n");
    }
  }
  while (continue_communicating);

  if (sockfd != 0)
    close(sockfd);

  if (fd > 0)
    close(fd);

  return NULL;
}

double task_time = 1.0;

int main()
{
int i, err;
pthread_t threadid[4];

  for (i = 0; i < N_PIPES; i++)
  {
    err = mkfifo(fifo_name[i], S_IRUSR | S_IWUSR);
    if(err != 0)
    {
      // Probably file already exists, delete the file ...
      unlink(fifo_name[i]); 
      // Try once more ...
      err = mkfifo(fifo_name[i], S_IRUSR | S_IWUSR);
      if (err != 0)
      {
        printf("Couldn't open %s. Now exiting ... ", fifo_name[i]);
        return 0;
      }
    }
  }

  first_vision_packet_received = first_kinect_packet_received = 0;

#ifdef VISION

  pthread_create(&threadid[VISION_WRITER], (pthread_attr_t *) NULL, VisionWriterThread, (void *) fifo_name[VISION_WRITER]);
  pthread_create(&threadid[MOTOR_READER], (pthread_attr_t *) NULL, MotorReaderThread, (void *) fifo_name[MOTOR_READER]);

#endif

#ifdef KINECT

  pthread_create(&threadid[KINECT_READER], (pthread_attr_t *) NULL, KinectReaderThread, (void *) fifo_name[KINECT_READER]);
  // pthread_create(&threadid[KINECT_WRITER], NULL, KinectWriterThread, (void *) fifo_name[KINECT_WRITER]);

#endif

#ifdef VISION

  pthread_join(threadid[VISION_WRITER], NULL); // Sends data from vision to robot
  pthread_join(threadid[MOTOR_READER], NULL);  // Sends data from robot to vision

#endif

#ifdef KINECT

  pthread_join(threadid[KINECT_READER], NULL); // Sends data from Kinect to robot
  // pthread_join(threadid[KINECT_WRITER], NULL); // Sends data from robot to Kinect

#endif

  for (i = 0; i < N_PIPES; i++)
    unlink(fifo_name[i]);

  return 0;
}

