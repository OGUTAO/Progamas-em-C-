//progama de ordena��o BubbleSort//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declara��o de vari�vel//

int vetor [100000];
int i = 0;
int troquei = 0;
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
	
	troquei=1;
	while (troquei){
		troquei = 0;
		for (i = 0 ; i < 99999 ; i ++){
			if (vetor[i] > vetor[i+1]) {
				int temp = vetor[i];
					vetor[i] = vetor[i + 1];
					vetor[i + 1] = temp;
					troquei = 1;
			}
		}
	}

//impress�o do vetor//
	
	for (i = 0; i < 100000; i++){
		printf ("%d\n", vetor[i]);
	}
}
