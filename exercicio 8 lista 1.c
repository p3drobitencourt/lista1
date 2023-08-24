#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

int main(){
	
	int resultados[100], N, i, contador[100], faces;
	printf("Qtde de vezes que o dado foi lancado: ");
	scanf("%d",&N);
	
	for (i = 0; i < N; i++) {
        printf("lançamento %d: ", i + 1);
        scanf("%d", &resultados[i]);
    }
	
	faces = 6;
	contador[faces];
	
	contarFaces(resultados, N, contador, faces);
	
	
    for (i = 0; i < faces; i++) {
    	
        printf("Face %d: %d ocorrencias\n", i + 1, contador[i]);
        
    }
	
	

	
}
