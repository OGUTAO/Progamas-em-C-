//progama de ordena��o direta//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declara��o de vari�vel//

int vetor [100000];
int i = 0;
int j = 0;
time_t t;

//fun��o principal de execu��o do programa//

int main () {
//inicializ��o de aleatoriedade//
	srand ((unsigned)time (&t));
//inicializ��o da mem�ria//
	for(i = 0; i < 100000; i++){
		vetor [i] = (rand() % 100000);
	}
//impress�o do vetor//
	for (i = 0; i < 100000; i++){
		printf("%d\n", vetor[i]);
}
//ordena��o propriamente dita//
	for (i = 0; i < 99999 ; i++){
		for (j = (i + 1); j < 100000; j++){ //do primeiro ao pen�ltimo//
		if(vetor[i] > vetor[j]){
			int temp = vetor[i];
			vetor[i]= vetor[j];
			vetor [j]= temp;
			}
		}
	}
//impress�o do vetor//
	for (i = 0; i < 100000; i++){
		printf ("%d\n", vetor[i]);
	}
}
