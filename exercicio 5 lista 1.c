#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int verificarElemento(int vetor[], int x, int a) {
   int qnt = 0;
   int i;
    for ( i = 0; i < x; i++) {
       if(vetor[i] == a){
       	
       	qnt ++;
       	
	   }
	   
        }
    
    return qnt;
}

int main(){
	
	int vetor[100], N, a, qnt;
	printf("Qtde de elementos do vetor:");
	scanf("%d",&N);
	printf("Digite os dados para o vetor: ");
	leiaVetor(vetor,N);
	printf("Digite o elemento a ser verificado: ");
	scanf("%d",&a);
	qnt = verificarElemento(vetor,N,a);
	printf("\n");
	printf("O elemento se repete %d vezes",qnt);
	printf("\n");
	escrevaVetor(vetor,N);
	

	
}
