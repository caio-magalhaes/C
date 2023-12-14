#include <stdio.h>
#include <locale.h>

// Função para calcular o somatório dos N primeiros números pares definidos por um operador
int somatorioNPrimeirosPares(int operador, int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        int numero = operador * (2 * i);
        soma += numero;
    }

    return soma;
}

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    int operador, n;

    // Solicita ao usuário que insira um operador
    printf("Digite um operador (+1 ou -1): ");
    scanf("%d", &operador);

    // Solicita ao usuário que insira um valor N
    printf("Digite um valor N: ");
    scanf("%d", &n);

    // Chama a função para calcular o somatório dos N primeiros números pares
    int resultado = somatorioNPrimeirosPares(operador, n);

    // Imprime o resultado
    printf("\nO somatório dos N primeiros números pares é: %d\n", resultado);

    return 0;
}

