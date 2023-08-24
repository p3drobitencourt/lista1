#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

int main(){

	char vetorS[100], inverso[100];
	int i, tamanho;
	printf("digite os caracteres a serem armazenados no vetor: \n ");
	gets(vetorS);
	printf("o vetor possui %d caractres", strlen(vetorS));
	printf("\n");
	printf("Vetor lido em ordem inversa: ");
	
	tamanho = strlen(vetorS);
	
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", vetorS[i]);
        
    }
	
	
}
