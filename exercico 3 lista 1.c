#include <stdio.h>

int encontrarMaior(int vetor[], int x) {
    int maior = vetor[0];
    int i;
    for ( i = 1; i < x; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    int vetor[100], N, maior;
    int i;
    printf("Qtde de elementos do vetor:");
    scanf("%d", &N);
    
    printf("Digite os dados para o vetor:\n");
    for ( i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }
    
    maior = encontrarMaior(vetor, N);
    printf("O maior valor no vetor é: %d\n", maior);
    
    return 0;
}

