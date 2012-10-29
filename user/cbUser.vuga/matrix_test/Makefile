PACKAGE = test
DEBUG   = -Wall -ggdb
OPS     = -O2 -march=nocona

INCLUDES =
CXXFLAGS =
LFLAGS   = -lm

SRCS    = main.cpp\
          matrix.cpp\
          tools.cpp

OBJS    = ${SRCS:.cpp=.o} 

${PACKAGE}:${OBJS}
	g++ -o ${PACKAGE} ${OBJS} ${CXXFLAGS} ${LFLAGS} ${OPS}

${OBJS}:${SRCS}
	g++ -c ${SRCS} ${CXXFLAGS} ${LFLAGS} ${OPS}

clean::
	-@rm ${OBJS}
	-@rm ${PACKAGE}
