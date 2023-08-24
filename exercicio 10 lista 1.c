#include <stdio.h>
#include <string.h>

int main() {
    char DNA[51]; // Tamanho máximo é 50, mais 1 para o caractere nulo '\0'

    // Passo 1: Ler o vetor DNA
    printf("Digite a sequência de DNA (A, T, C, G): ");
    scanf("%s",DNA);

    int tamanho = strlen(DNA), i;


    char complementar[51]; // 

    for ( i = 0; i < tamanho; i++) {
        if (DNA[i] == 'A') {
            complementar[i] = 'T';
        } else if (DNA[i] == 'T') {
            complementar[i] = 'A';
        } else if (DNA[i] == 'C') {
            complementar[i] = 'G';
        } else if (DNA[i] == 'G') {
            complementar[i] = 'C';
        } else {
           
            complementar[i] = 'X'; 
        }
    }
    complementar[tamanho] = '\0';

    printf("Vetor complementar:\n %s \n",complementar);

    return 0;
}

