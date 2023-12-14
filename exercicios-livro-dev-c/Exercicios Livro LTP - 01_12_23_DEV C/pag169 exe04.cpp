#include <stdio.h>
#include <locale.h>

// Fun��o para calcular o somat�rio dos N primeiros n�meros pares definidos por um operador
int somatorioNPrimeirosPares(int operador, int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        int numero = operador * (2 * i);
        soma += numero;
    }

    return soma;
}

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    int operador, n;

    // Solicita ao usu�rio que insira um operador
    printf("Digite um operador (+1 ou -1): ");
    scanf("%d", &operador);

    // Solicita ao usu�rio que insira um valor N
    printf("Digite um valor N: ");
    scanf("%d", &n);

    // Chama a fun��o para calcular o somat�rio dos N primeiros n�meros pares
    int resultado = somatorioNPrimeirosPares(operador, n);

    // Imprime o resultado
    printf("\nO somat�rio dos N primeiros n�meros pares �: %d\n", resultado);

    return 0;
}

