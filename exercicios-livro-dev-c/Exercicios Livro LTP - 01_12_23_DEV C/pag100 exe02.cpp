//Para os seres humanos, trabalhar com séries numéricas sem o auxílio de ferramentas computacionais pode ser um grande transtorno. Assim sendo, construa um
// programa que leia o número de termos da série e imprima o valor de S.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    int n;
    double soma = 0.0;

    // Solicita ao usuário o número de termos da série
    printf("Informe o número de termos da série: ");
    scanf("%d", &n);

    // Calcula a soma da série
    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i;
    }

    // Apresenta o valor da série
    printf("O valor da série S é: %.4f\n", soma);

    return 0;
}

