#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int contarImpar(int vetor[], int x) {
    int impar = vetor[0];
    int i;
    int contar = 0;
    for ( i = 1; i < x; i++) {
        if (vetor[i] %2 != 0  ) {
       impar = vetor[i];
       contar++;
       
        }
    }
    return contar;
}

int main(){
	
	int vetor[100], N, qnt;
	printf("Qtde de elementos do vetor:");
	scanf("%d",&N);
	printf("Digite os dados para o vetor: ");
	leiaVetor(vetor,N);
	qnt = contarImpar(vetor,N);
	printf("Quantidade de numeros impares: %d",qnt);

	
}


