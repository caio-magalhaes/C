#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    int tamanho;
    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    // Declara��o e leitura dos elementos do vetor A
    int vetorA[tamanho];
    printf("Informe os elementos do vetor A:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    // Declara��o e leitura dos elementos do vetor B
    int vetorB[tamanho];
    printf("\nInforme os elementos do vetor B:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    // Verifica a quantidade de posi��es com elementos diferentes entre os vetores A e B
    int diferenca = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetorA[i] != vetorB[i]) {
            diferenca++;
        }
    }

    // Apresenta o resultado
    printf("\nQuantidade de posi��es com elementos diferentes: %d\n", diferenca);

    return 0;
}

