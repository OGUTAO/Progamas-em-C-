//progama de ordena��o Busca exaustiva//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declara��o de vari�vel//

int vetor [100000];
int i = 0;
int busca = 0;
int achei = 0;
time_t t;

//fun��o principal de execu��o do programa//

int main () {
//inicializ��o de aleatoriedade//

	srand ((unsigned)time (&t));
//inicializ��o da mem�ria//

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
	printf("Se fodeu, n�o existe");
	} else {
		printf("achei, na posicao %d", achei);
	}
}
