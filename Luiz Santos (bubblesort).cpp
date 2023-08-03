//progama de ordenação BubbleSort//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declaração de variável//

int vetor [100000];
int i = 0;
int troquei = 0;
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

//impressão do vetor//
	
	for (i = 0; i < 100000; i++){
		printf ("%d\n", vetor[i]);
	}
}
