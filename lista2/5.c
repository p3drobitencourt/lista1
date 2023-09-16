#include <stdio.h>

int main(){
	int m[100][100], linhas, colunas, i, j;
	printf("Digite o número de linhas: ");
	scanf("%d", &linhas);
	printf("Digite o número de colunas: ");
	scanf("%d", &colunas);
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf("Digite o valor para a posição [%d][%d] da Matriz: ", i+1, j+1);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("A diagonal secundária é: ");
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			if(i + j == colunas - 1){
				printf("%d ", m[i][j]);
			}
		}
	}
	return 0;
}
