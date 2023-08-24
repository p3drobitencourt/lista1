#include <stdio.h>
#include "biblioteca.h"

int calcularSoma(int vetor[], int x) { 
    int soma = 0;
    int i;
    for (i = 0; i < x; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main(){
	
	int vetor[100], N, S;
	printf("Qtde de elementos do vetor:");
	scanf("%d",&N);
	printf("Digite os dados para o vetor: ");
	leiaVetor(vetor,N);
	S = calcularSoma(vetor,N);
	printf("A soma dos elementos dos vetores e: %d \n ",S);
	
}
