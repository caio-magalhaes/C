#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    char palavra[50];
    int vezes;

    // Solicita ao usu�rio que insira uma palavra
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Solicita ao usu�rio o n�mero de vezes que deseja imprimir a palavra
    printf("Digite o n�mero de vezes que deseja imprimir a palavra: ");
    scanf("%d", &vezes);

    // Imprime a palavra o n�mero de vezes desejado
    printf("\nImprimindo a palavra %d vezes:\n", vezes);
    for (int i = 0; i < vezes; i++) {
        printf("%s\n", palavra);
    }

    return 0;
}

