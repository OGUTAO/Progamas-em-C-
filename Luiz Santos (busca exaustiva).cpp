//progama de ordenação Busca exaustiva//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declaração de variável//

int vetor [100000];
int i = 0;
int busca = 0;
int achei = 0;
time_t t;

//função principal de execução do programa//

int main () {
//inicializção de aleatoriedade//

	srand ((unsigned)time (&t));
//inicializção da memória//

	for(i = 0; i < 100000; i++){
		vetor [i] = (rand() % 100000);

	}
//descoberta do parametro de busca//
printf ("digite um valor para ser buscado :");
scanf ("%d", &busca);
	
//busca apropriamente dita//
	
	achei = -1;
	for (i = 0 ; i < 100000; i++) {
		if (vetor[i] == busca) {
			achei = i;
		}
	}
if (achei == -1){
	printf("Se fodeu, não existe");
	} else {
		printf("achei, na posicao %d", achei);
	}
}
