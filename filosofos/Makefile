
CC=gcc
INCLUDES=-lpthread
CFLAGS= -c -Wall ${INCLUDES}

all:jantar

jantar: filosofo.o jantar.o
	${CC} ${INCLUDES} filosofo.o jantar.o -o jantar

filosofo.o: filosofo.c
	${CC} ${CFLAGS} filosofo.c

jantar.o: jantar.c
	${CC} ${CFLAGS} jantar.c

clean:
	rm -rf *.o jantar
