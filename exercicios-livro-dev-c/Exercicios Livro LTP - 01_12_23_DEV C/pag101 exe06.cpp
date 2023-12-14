#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    int numeroVezes;
    char frase[1000];

    // Solicita ao usuário que insira uma frase
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Solicita ao usuário o número de vezes que deseja imprimir a frase
    printf("Digite o número de vezes que deseja imprimir a frase: ");
    scanf("%d", &numeroVezes);

    // Imprime a frase o número de vezes desejado
    for (int i = 0; i < numeroVezes; i++) {
        printf("%s", frase);
    }

    return 0;
}

