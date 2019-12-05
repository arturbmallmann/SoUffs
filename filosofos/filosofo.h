#ifndef FILOSOFO_H
#define FILOSOFO_H
#define JANTAR "jantar"
#include <unistd.h>
#include <stdlib.h>

#include <semaphore.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */

struct{
int estado;
} typedef filosofo;

void pensar(const int i);
void comer(const int i);
void pegar_garfos(const int i);
void largar_garfos(const int i);
void testar(const int i);
#endif
