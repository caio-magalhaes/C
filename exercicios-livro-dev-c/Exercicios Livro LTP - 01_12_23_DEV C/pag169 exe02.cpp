#include <stdio.h>
#include <locale.h>

// Fun��o para calcular a soma dos N n�meros inteiros entre dois valores
int somatorioEntreValores(int inicio, int fim) {
    int soma = 0;

    // Garante que o in�cio seja menor que o fim
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
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    int num1, num2;

    // Solicita ao usu�rio que insira dois n�meros positivos
    printf("Digite o primeiro n�mero positivo: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero positivo: ");
    scanf("%d", &num2);

    // Chama a fun��o para calcular o somat�rio
    int resultado = somatorioEntreValores(num1, num2);

    // Imprime o resultado
    printf("\nA soma dos n�meros inteiros entre %d e %d �: %d\n", num1, num2, resultado);

    return 0;
}

