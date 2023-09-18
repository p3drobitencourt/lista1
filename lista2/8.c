#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>

void Matriz(int m[][100], int linhas, int cols) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++)
            printf("%3d |", m[i][j]);
        printf("\n");
    }
    printf("\n");
}

void soma(int resultado[][100], int matriz1[][100], int matriz2[][100], int linhas, int cols) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void subtrair(int resultado[][100], int matriz1[][100], int matriz2[][100], int linhas, int cols) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void adicionarConstante(int matriz[][100], int linhas, int cols, int constante) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++) {
            matriz[i][j] += constante;
        }
    }
}

void gerarMatriz(int m[][100], int linhas, int cols) {
    int i, j;
   
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++) {
            m[i][j] = rand() % 70;
        }
    }
}

int main() {
    int matriz1[100][100], matriz2[100][100], resultado[100][100], linhas, cols;
    char opcao;

    system("color A");
    setlocale(LC_ALL, "Portuguese");
    printf("MENU DE OPÇÕES");
    printf("\n");
    printf("\nMade by kkjao");
    printf("\n--------------------------------");

    printf("\nlinhas: ");
    scanf("%d", &linhas);
    printf("\nColunas: ");
    scanf("%d", &cols);

    gerarMatriz(matriz1, linhas, cols);
    gerarMatriz(matriz2, linhas, cols);
    printf("\n--------------------------------");
    printf("\n");

    printf("\n(a) Somar as duas matrizes");
    printf("\n(b) Subtrair a primeira matriz da segunda");
    printf("\n(c) Adicionar uma constante às duas matrizes");
    printf("\n(d) Imprimir as matrizes");
    printf("\n");
    printf("\nEscolha uma opção: ");
    scanf(" %c", &opcao);
int constante;
    switch (opcao) {

    case 'a':
        soma(resultado, matriz1, matriz2, linhas, cols);
        printf("Resultado da soma: \n");
        Matriz(resultado, linhas, cols);
        break;

    case 'b':
        subtrair(resultado, matriz1, matriz2, linhas, cols);
        printf("Resultado da subtração: \n");
        Matriz(resultado, linhas, cols);
        break;

    case 'c':
        
        printf("Informe a constante a ser adicionada: ");
        scanf("%d", &constante);
        adicionarConstante(matriz1, linhas, cols, constante);
        adicionarConstante(matriz2, linhas, cols, constante);
        printf("Matriz 1 com constante adicionada:\n");
        Matriz(matriz1, linhas, cols);
        printf("Matriz 2 com constante adicionada:\n");
        Matriz(matriz2, linhas, cols);
        break;

    case 'd':
        printf("Matriz 1:\n");
        Matriz(matriz1, linhas, cols);
        printf("Matriz 2:\n");
        Matriz(matriz2, linhas, cols);
        break;

    default:
        printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}
