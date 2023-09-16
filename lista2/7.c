#include <stdio.h>

int main(){
int m[100][100],m1[100][100], i, j,ordem,mult[100][100];
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
			printf("Digite o valor para a posicao da Matriz 2: ");
			scanf("%d", &m1[i][j]);
		}
	}
	printf("A matriz escalar e: ");
	for(i = 0; i < ordem; i++){
		printf("%d ", m1[i][i],"\n");
	}

	for(i = 0; i < ordem; i++){
		for(j = 0; j < ordem; j++){	
				 mult[i][j] = m[i][j] * m1[i][j];
			}
		}
		printf("\nA multiplicacao e:\n");
			for(i = 0; i < ordem; i++){
				for(j = 0; j < ordem; j++){
			printf("%d ", mult[i][j]);	
	}
	printf("\n");
  }
  	return 0;
}
