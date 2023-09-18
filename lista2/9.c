#include <stdlib.h>
#include <stdio.h>
#include "matrizLib.h"

void lerMatriz(int m[][100],int linhas,int cols){
	int i,j;
	srand(time(NULL));
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		   scanf("%d",&m[i][j]);
}

void Mult(int matriz[100][100], int matriz2[100][100], int resultado[100][100], int linha1, int coluna1, int coluna2){
	int j, i, z;
	
	for (i = 0; i < linha1; i++) {
        for ( j = 0; j < coluna2; j++) {
            for ( k = 0; k < coluna1; k++) {
                resultado[i][j] += matriz[i][z] * matriz2[z][j];
            }
        }
    }
}
	
void showMatriz(int m[][100],int linhas,int cols){
	int i,j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++)
		   printf("%3d |",m[i][j]);
	  printf("\n");	   
	}
	printf("\n");
}

int main(){
	
	int matriz[100][100], matriz2[100][100], result[100][100], linha1 = 2, coluna1 = 3, linha2 = 3, coluna2 = 2, i, j, aux;
	
	system("color A");
	
	lerMatriz(matriz,linha1,coluna1);
	
	printf("------");
	printf("\n");
	
	lerMatriz(matriz2,linha2,coluna2);
	
	printf("------");
	printf("\n");
	printf("\n");
	
	showMatriz(matriz,linha1,coluna1);
	
	printf("\n");
	
	showMatriz(matriz2,linha2,coluna2);
	
	printf("\n");
	
	Mult(matriz, matriz2, result, linha1, coluna1, coluna2);
	
	printf("\n");
	
	showMatriz(result,linha1,coluna2);
}
