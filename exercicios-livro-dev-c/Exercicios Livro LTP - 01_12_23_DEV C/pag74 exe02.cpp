// Em algumas situações, em uma aplicação, é preciso determinar quais são os números múltiplos de um ou mais valores, dentre todos os valores de um conjunto de dados. Dessa forma, faça um programa que leia um número e informese ele é divisível por três e por sete

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    int numero;

    // Solicita ao usuário que insira um número
    printf("Informe um número: ");
    scanf("%d", &numero);

    // Verifica se o número é divisível por três e por sete
    if (numero % 3 == 0 && numero % 7 == 0) {
        printf("%d é divisível por três e por sete.\n", numero);
    } else {
        printf("%d não é divisível por três e por sete.\n", numero);
    }

    return 0;
}

