#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int busca(int vetor[], int x, int a) {
	int i;
    for (i = 0; i < x; i++) {
        if (vetor[i] == a) {
            return i;  // Retorna a posição onde o número foi encontrado
        }
    }
    return -1;  // Retorna -1 se o número não foi encontrado
}

int main(){
	
	int vetor[100], N, a, i, posicao;
	printf("Qtde de elementos do vetor:");
	scanf("%d",&N);
	for (i = 0; i < N; i++){
		
		vetor[i] = rand() % 100;
		
	}
	printf("\n");
	escrevaVetor(vetor,N); 
	printf("Digite o elemento a ser buscado: ");
	scanf("%d",&a);
	printf("\n");
	posicao = busca(vetor,N,a);
	
	if(posicao != -1){
		printf("\n");
		printf("O numero %d esta na posicao %d do vetor: ",a,posicao);
		
	}
	
	else{
			printf("\n");
			printf("O numero %d nao se encontra no vetor: ",a);
		
	}
	
	
	
}
