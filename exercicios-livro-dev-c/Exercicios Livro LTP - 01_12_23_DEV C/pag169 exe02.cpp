#include <stdio.h>
#include <locale.h>

// Função para calcular a soma dos N números inteiros entre dois valores
int somatorioEntreValores(int inicio, int fim) {
    int soma = 0;

    // Garante que o início seja menor que o fim
    if (inicio > fim) {
        int temp = inicio;
        inicio = fim;
        fim = temp;
    }

    for (int i = inicio + 1; i < fim; i++) {
        soma += i;
    }

    return soma;
}

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    int num1, num2;

    // Solicita ao usuário que insira dois números positivos
    printf("Digite o primeiro número positivo: ");
    scanf("%d", &num1);

    printf("Digite o segundo número positivo: ");
    scanf("%d", &num2);

    // Chama a função para calcular o somatório
    int resultado = somatorioEntreValores(num1, num2);

    // Imprime o resultado
    printf("\nA soma dos números inteiros entre %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}

