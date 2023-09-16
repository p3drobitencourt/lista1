#include <stdio.h>

int main(){
int m[100][100],m1[100][100], i, j,ordem,soma[100][100];
	printf("Digite a ordem das matrizes: ");
	scanf("%d", &ordem);
	
	for(i = 0; i < ordem; i++){
		for(j = 0; j < ordem; j++){
			printf("Digite o valor para a posicao da Matriz: ");
			scanf("%d", &m[i][j]);
		}
	}
	for(i = 0; i < ordem; i++){
		for(j = 0; j < ordem; j++){
			printf("Digite o valor para a posicao da Matriz 2 : ");
			scanf("%d", &m1[i][j]);
		}
	}

	for(i = 0; i < ordem; i++){
		for(j = 0; j < ordem; j++){	
				 soma[i][j] = m[i][j] + m1[i][j];
			}
		}
		printf("A soma das matrizes é:\n");
			for(i = 0; i < ordem; i++){
				for(j = 0; j < ordem; j++){
			printf("%d ", soma[i][j]);	
	}
	printf("\n");
  }
  	return 0;
}
