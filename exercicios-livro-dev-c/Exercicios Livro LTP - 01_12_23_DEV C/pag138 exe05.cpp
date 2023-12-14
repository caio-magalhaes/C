#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    // Definindo a ordem das matrizes
    const int ordem = 5;

    int matrizA[ordem][ordem], matrizB[ordem][ordem], soma[ordem][ordem], diferenca[ordem][ordem];

    // Leitura da matriz A
    printf("Digite os elementos da matriz A (%dx%d):\n", ordem, ordem);
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Leitura da matriz B
    printf("\nDigite os elementos da matriz B (%dx%d):\n", ordem, ordem);
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Cálculo da soma das matrizes
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            soma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // Cálculo da diferença das matrizes
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            diferenca[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }

    // Impressão da matriz soma
    printf("\nMatriz Soma:\n");
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("%d\t", soma[i][j]);
        }
        printf("\n");
    }

    // Impressão da matriz diferença
    printf("\nMatriz Diferença:\n");
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("%d\t", diferenca[i][j]);
        }
        printf("\n");
    }

    return 0;
}

