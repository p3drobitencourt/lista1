#include <stdio.h>

int main(){
	int m[100][100], tamanho, i,j;
	printf("Digite o tamanho da Matriz: ");
	scanf("%d", &tamanho);
	
	for(i = 0; i < tamanho; i++){
		for( j = 0; j < tamanho; j++){
			printf("Digite o valor para a posição da Matriz: ", i+1, j+1);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("A diagonal principal é: ");
	for(i = 0; i < tamanho; i++){
		printf("%d ", m[i][i]);
	}
	return 0;
}
