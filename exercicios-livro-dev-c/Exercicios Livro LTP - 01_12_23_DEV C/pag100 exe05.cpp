// Para poder classificar um conjunto de dados, é comum que programadores utilizem estruturas de decisão associadas a estruturas de repetição. Assim sendo,
//construa um programa que apresente todos os números divisíveis por três e porsete que sejam menores que 30

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    printf("Números divisíveis por três e por sete menores que 30:\n");

    // Verifica e imprime os números divisíveis por três e por sete menores que 30
    for (int i = 1; i < 30; i++) {
        if (i % 3 == 0 && i % 7 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

