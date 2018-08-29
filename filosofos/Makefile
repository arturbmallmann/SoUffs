
CC=gcc
CFLAGS= -c -Wall -lpthread

all:jantar

tudo: main.o rush.o
  ${CC} main.o rush.o -o rush

filoso.o: filosofo.c
  ${CC} ${CFLAGS} filosofo.c

jantar.o: jantar.c
  ${CC} ${CFLAGS} jantar.c

clean:
 rm -rf *.o jantar
