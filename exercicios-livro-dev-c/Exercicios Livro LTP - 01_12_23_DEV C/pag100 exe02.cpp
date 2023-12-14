//Para os seres humanos, trabalhar com s�ries num�ricas sem o aux�lio de ferramentas computacionais pode ser um grande transtorno. Assim sendo, construa um
// programa que leia o n�mero de termos da s�rie e imprima o valor de S.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    int n;
    double soma = 0.0;

    // Solicita ao usu�rio o n�mero de termos da s�rie
    printf("Informe o n�mero de termos da s�rie: ");
    scanf("%d", &n);

    // Calcula a soma da s�rie
    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i;
    }

    // Apresenta o valor da s�rie
    printf("O valor da s�rie S �: %.4f\n", soma);

    return 0;
}

