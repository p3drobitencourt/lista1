#include <stdio.h>

int encontrarMenor(int vetor[], int x) {
    int menor = vetor[0];
    int i;
    for ( i = 1; i < x; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}

int main() {
    int vetor[100], N, menor;
    int i;
    printf("Qtde de elementos do vetor:");
    scanf("%d", &N);
    
    printf("Digite os dados para o vetor:\n");
    for ( i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }
    
    menor = encontrarMenor(vetor, N);
    printf("O menor valor no vetor é: %d\n", menor);
    
    return 0;
}

