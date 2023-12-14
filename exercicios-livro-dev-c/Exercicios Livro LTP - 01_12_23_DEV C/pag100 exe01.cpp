//Fa�a um programa que leia n�meros inteiros at� que seja informado o valor 0. Apresente a m�dia dos valores, o maior e o menor valor e a quantidade de n�meros pares e �mpares.

#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    int numero, soma = 0, quantidade = 0, maior = INT_MIN, menor = INT_MAX;
    int quantidadePares = 0, quantidadeImpares = 0;

    printf("Informe n�meros inteiros (digite 0 para encerrar):\n");

    do {
        printf("Informe um n�mero: ");
        scanf("%d", &numero);

        // Verifica se o n�mero � diferente de zero antes de incluir nos c�lculos
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

            // Verifica se o n�mero � par ou �mpar
            if (numero % 2 == 0) {
                quantidadePares++;
            } else {
                quantidadeImpares++;
            }
        }

    } while (numero != 0);

    if (quantidade > 0) {
        // Calcula a m�dia
        double media = (double)soma / quantidade;

        // Apresenta os resultados
        printf("\nM�dia dos valores: %.2f\n", media);
        printf("Maior valor: %d\n", maior);
        printf("Menor valor: %d\n", menor);
        printf("Quantidade de n�meros pares: %d\n", quantidadePares);
        printf("Quantidade de n�meros �mpares: %d\n", quantidadeImpares);
    } else {
        printf("Nenhum n�mero informado.\n");
    }

    return 0;
}

