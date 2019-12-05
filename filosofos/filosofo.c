#include "filosofo.h"
#define JANTAR "jantar"
//read man 3 sem_init
//sem_init(&mutex,0,1);
void pensar(const int i){
	sleep(random()%10+1);
};
void comer(const int i){
	sleep(random()%10+1);
};
void pegar_garfos(const int i){
	sem_t * mutex=sem_open(JANTAR,O_CREAT);
	sem_wait(mutex);

	sem_post(mutex);
};
void largar_garfos(const int i){

};
void testar(const int i){

};
