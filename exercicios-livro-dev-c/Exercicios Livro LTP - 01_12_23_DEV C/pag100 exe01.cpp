//Faça um programa que leia números inteiros até que seja informado o valor 0. Apresente a média dos valores, o maior e o menor valor e a quantidade de números pares e ímpares.

#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    int numero, soma = 0, quantidade = 0, maior = INT_MIN, menor = INT_MAX;
    int quantidadePares = 0, quantidadeImpares = 0;

    printf("Informe números inteiros (digite 0 para encerrar):\n");

    do {
        printf("Informe um número: ");
        scanf("%d", &numero);

        // Verifica se o número é diferente de zero antes de incluir nos cálculos
        if (numero != 0) {
            soma += numero;
            quantidade++;

            // Atualiza o maior e o menor valor
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }

            // Verifica se o número é par ou ímpar
            if (numero % 2 == 0) {
                quantidadePares++;
            } else {
                quantidadeImpares++;
            }
        }

    } while (numero != 0);

    if (quantidade > 0) {
        // Calcula a média
        double media = (double)soma / quantidade;

        // Apresenta os resultados
        printf("\nMédia dos valores: %.2f\n", media);
        printf("Maior valor: %d\n", maior);
        printf("Menor valor: %d\n", menor);
        printf("Quantidade de números pares: %d\n", quantidadePares);
        printf("Quantidade de números ímpares: %d\n", quantidadeImpares);
    } else {
        printf("Nenhum número informado.\n");
    }

    return 0;
}

