#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    char palavra[50];
    int vezes;

    // Solicita ao usuário que insira uma palavra
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Solicita ao usuário o número de vezes que deseja imprimir a palavra
    printf("Digite o número de vezes que deseja imprimir a palavra: ");
    scanf("%d", &vezes);

    // Imprime a palavra o número de vezes desejado
    printf("\nImprimindo a palavra %d vezes:\n", vezes);
    for (int i = 0; i < vezes; i++) {
        printf("%s\n", palavra);
    }

    return 0;
}

