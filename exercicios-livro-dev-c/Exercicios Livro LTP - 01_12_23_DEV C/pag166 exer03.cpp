// Faça uma função que receba, como parâmetro, um vetor com dez números inteiros e retorne-os ordenados em forma crescente

#include <stdio.h>

// Função para ordenar um vetor de inteiros em ordem crescente
void ordenarCrescente(int vetor[], int tamanho) {
    int i, j, temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            // Troca os elementos se estiverem fora de ordem
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vetor[10] = {5, 2, 8, 1, 6, 9, 3, 7, 4, 10};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor original:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    // Chama a função para ordenar o vetor
    ordenarCrescente(vetor, tamanho);

    printf("\nVetor ordenado em forma crescente:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

