#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    int numeroVezes;
    char frase[1000];

    // Solicita ao usu�rio que insira uma frase
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Solicita ao usu�rio o n�mero de vezes que deseja imprimir a frase
    printf("Digite o n�mero de vezes que deseja imprimir a frase: ");
    scanf("%d", &numeroVezes);

    // Imprime a frase o n�mero de vezes desejado
    for (int i = 0; i < numeroVezes; i++) {
        printf("%s", frase);
    }

    return 0;
}

