#include<stdio.h>

int main(){
	int m[100][100],tamanhoC,tamanhoL,i,j,maior=0;
	printf("Digite o tamanho da matriz ");
	scanf("%d%d",&tamanhoC,&tamanhoL);
	
	for(i=0;i<tamanhoL;i++){
		for(j=0;j<tamanhoC;j++){
			printf("Digite os valores da Matriz ");
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<tamanhoL;i++){
		for(j=0;j<tamanhoC;j++){
			if(m[i][j]>maior){
				maior=m[i][j];
			}
		}
	}
	printf("%d",maior);
}
