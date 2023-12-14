// Para poder classificar um conjunto de dados, � comum que programadores utilizem estruturas de decis�o associadas a estruturas de repeti��o. Assim sendo,
//construa um programa que apresente todos os n�meros divis�veis por tr�s e porsete que sejam menores que 30

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    printf("N�meros divis�veis por tr�s e por sete menores que 30:\n");

    // Verifica e imprime os n�meros divis�veis por tr�s e por sete menores que 30
    for (int i = 1; i < 30; i++) {
        if (i % 3 == 0 && i % 7 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

