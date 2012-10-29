/*!=============================================================================
  ==============================================================================

  \file    SL_CB_comm.c

  \author 
  \date   

  ==============================================================================
  \remarks

      Definitions and functions used to communicate CB's motor server 
      through udp. We inserted dummy int variable into the message/data 
      structure defined Gordon/Josh's motor server code to comply with 
      double-byte boundary requirement for sparc/ppc.

      Jun Nakanishi, Mike Mistry, Darrin Bentivegna, Stefan Schaal Mar 2007

  ============================================================================*/
/* global headers */
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "sys/socket.h"
#include "netinet/in.h"

/* local headers */
#include "utility.h"
#include "SL.h"
#include "udp_communication.h"
#include "SL_user.h"


/*********************************************************************
 define structures for to communicate with CB's motor server adopted
 from cb-sim/motor_servo

   see udp_communication.h, SLSDC_interface.h, gyro.h in cb-sim or
   motor_servo code developed by Gordon and Josh

*********************************************************************/

#define MAX_RT_MESSAGE_DATA_SIZE 1024

/*! message type for communication with CB */
enum rt_message_type { 
  CONTROL_DATA, 
  SENSOR_DATA, 
  CONNECTION_REQUEST, 
  DISCONNECTION_REQUEST, 
  ACKNOWLEDGE };

/*! actual message structure sent between SL and CB */
typedef struct rt_message { 
  enum rt_message_type type;
  int nonce;
  double time_stamp;
  int data_size;
  char data[MAX_RT_MESSAGE_DATA_SIZE];
  int dummy; //!< double byte boundary for spacr/ppc compliance
} rt_message;

/* structure used in cb-sim to store data */

/*! parameter structure for communication */
typedef struct rt_messager { 
  int fd;
  int local_nonce;
  int remote_nonce;
  double local_time;
  double remote_time;
  double resend_delay;
  double listen_timeout; 
  int message_received;
  int connected;
  int disconnect; 
  struct sockaddr_in remote_addr;
} rt_messager;

/*! sdc actual state */
typedef struct SDC_actual { 

  short a_tor; //!< actual torque
  short a_pos; //!< actual position
  short a_vel; //!< actual velocity
  
  short touch1; //!< Touch Load Cell 1
  short touch2; //!< Touch Load Cell 2

} SDC_actual;

/*! sdc desired state */
typedef struct SDC_desired { 

  short d_tor; //!< desire torque 
  short d_pos; //!< desire position
  short d_vel; //!< desired velocity
  
  /*!<  sdc gains */
  short pos_p_gain; //!< P gain
  short pos_i_gain; //!< I gain
  short pos_d_gain; //!< D gain
  short tor_p_gain; //!< Torque gain
  short tor_i_gain; //!< Torque gain
  short vel_p_gain; //!< Vel P gain
  short vel_i_gain; //!< Vel I gain
  
  short uff; //!< command

} SDC_desired;

/*! Gyro sensor readings */
typedef struct GYRO_data {
  double quaternion[4];
  float  euler[3];
  int dummy;  //!< double byte boundary
  double magnetometer[3];
  double acceleration[3];
  double angular_velocity[3]; 
} GYRO_data;

/*! sensor reading data from SDC */
typedef struct mess_from_SDC {
  struct SDC_actual actual[N_DOFS];
  int dummy; //!< double byte boundary
  GYRO_data gyro;
} mess_from_SDC;

/*! desired state/command to SDC */
typedef struct mess_to_SDC{
  struct SDC_desired desired[N_DOFS];
} mess_to_SDC;


/**************** end of CB motor server stuff ****************/

/* defines */
//! motor_server_info file (IP address, port #)
#define MOTOR_SERVER_HOST_INFO_FILE "motor_server_info.cf" 

/* local variables */

static char motor_server_hostname[100]; // motor server hostname
static int  motor_server_portnum;       // motor server port number

/* local functions */
/* init socket communication */

/* read data from CB */

/* send desired command to CB */


/* read config file */
static int
read_motor_server_host_info(void);


int main(void){

  read_motor_server_host_info();
  printf("motor_server_hostmane = %s, portnum = %d", 
	 motor_server_hostname, motor_server_portnum);

  return TRUE;
}


/*!*****************************************************************************
 *******************************************************************************
\note  read_motor_server_host_info
\date  March 2007
\remarks 

parses the motor server IP and port # info

 *******************************************************************************
 Function Parameters: [in]=input,[out]=output

none

 ******************************************************************************/
int
read_motor_server_host_info(void) {

  int j, i;
  static char   string[100];
  static char   fname[100] = MOTOR_SERVER_HOST_INFO_FILE;
  FILE  *in;
  double dum;

  sprintf(string,"%s%s",CONFIG,MOTOR_SERVER_HOST_INFO_FILE);
  in = fopen(string,"r");
  if (in == NULL) {
    printf("ERROR: Cannot open file >%s<!\n",string);
    return FALSE;
  }

  /* find host name and read */
  if (!find_keyword(in, "host_address")) {
      printf("ERROR: Cannot find host address for CB's motor server!\n");
      return FALSE;
    }
  fscanf(in,"%s",motor_server_hostname);
  
  /* find host port number and read */
  if (!find_keyword(in, "host_port_number")) {
    printf("ERROR: Cannot find port number for CB's motor server!\n");
    return FALSE;
  }
  fscanf(in,"%d",&(motor_server_portnum));
    
  fclose(in);

  return TRUE;

}


