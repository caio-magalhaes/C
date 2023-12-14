#include <stdio.h>
#include <locale.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] < vetor[j + 1]) {
                trocar(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    int tamanho;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Declara��o e leitura dos elementos do vetor A
    int vetorA[tamanho];
    printf("Informe os elementos do vetor A:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    // Chama a fun��o para ordenar o vetor em ordem decrescente
    bubbleSort(vetorA, tamanho);

    // Apresenta o vetor ordenado em ordem decrescente
    printf("\nVetor A em ordem decrescente:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorA[i]);
    }
    printf("\n");

    return 0;
}

