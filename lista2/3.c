#include<stdio.h>

int main(){
	int m[100][100],tamanhoC,tamanhoL,i,j,x,igual;
	printf("Digite o tamanho da Matriz ");
	scanf("%d%d",&tamanhoC,&tamanhoL);
	
	for(i=0;i<tamanhoL;i++){
		for(j=0;j<tamanhoC;j++){
			printf("Digite os valores da Matriz ");
			scanf("%d",&m[i][j]);
		}
	}
	printf("Qual o valor de x ");
	scanf("%d",&x);
	
	for(i=0;i<tamanhoL;i++){
		for(j=0;j<tamanhoC;j++){
			if(m[i][j]==x){
				igual++;
			}
		}
	}
	printf("%d",igual);
}
