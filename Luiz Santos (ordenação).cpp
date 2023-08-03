//progama de ordenação direta//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declaração de variável//

int vetor [100000];
int i = 0;
int j = 0;
time_t t;

//função principal de execução do programa//

int main () {
//inicializção de aleatoriedade//
	srand ((unsigned)time (&t));
//inicializção da memória//
	for(i = 0; i < 100000; i++){
		vetor [i] = (rand() % 100000);
	}
//impressão do vetor//
	for (i = 0; i < 100000; i++){
		printf("%d\n", vetor[i]);
}
//ordenação propriamente dita//
	for (i = 0; i < 99999 ; i++){
		for (j = (i + 1); j < 100000; j++){ //do primeiro ao penúltimo//
		if(vetor[i] > vetor[j]){
			int temp = vetor[i];
			vetor[i]= vetor[j];
			vetor [j]= temp;
			}
		}
	}
//impressão do vetor//
	for (i = 0; i < 100000; i++){
		printf ("%d\n", vetor[i]);
	}
}
