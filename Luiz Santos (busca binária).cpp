//progama de ordenação busca binária//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declaração de variável//

int vetor [100000];
int i = 0;
int busca = 0;
int inicio = 0;
int meio = 0;
int fim = 0;

//função principal de execução do programa//

int main () {
//inicializção da memória//
	for(i = 0; i < 100000; i++){
		vetor [i] = i;

	}
//descoberta do parametro de busca//
printf ("digite um valor para ser buscado :");
scanf ("%d", &busca);
	
//busca apropriamente dita//
	inicio = 0;
	fim = 99999;
	while (fim >= inicio ) {
	meio = ((inicio + fim) /2);
		
		if (vetor[meio] == busca){
			printf("Achei na posição %d", meio);
			return 0;
		} else if (vetor[meio] > busca){
			fim = (meio -1);
		} else {
			inicio = meio + 1;
		}
	}
	printf("Se fodeu, não existe");	
}
