#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int multiplicarVetores(int vetor1[], int vetor2[], int vetorResult[], int x) {
   int i;
    for ( i = 0; i < x; i++) {
      
      vetorResult[i] = vetor1[i] * vetor2[i];
      
	   
        }
    
}

int main(){
	
	int vetor1[100], vetor2[100], vetorResult[100], N, i;
	printf("Qtde de elementos dos vetores:");
	scanf("%d",&N);
	printf("Digite os dados para o vetor1: ");
	leiaVetor(vetor1,N);
	printf("Digite os dados para o vetor2: ");
	leiaVetor(vetor2,N);
	printf("\n");
	multiplicarVetores(vetor1, vetor2, vetorResult, N);
	printf("\n");
	printf("Resultado: ");
    for (i = 0; i < N; i++) {
        printf("%d ", vetorResult[i]);
    }
    printf("\n");
	
	

	
}
