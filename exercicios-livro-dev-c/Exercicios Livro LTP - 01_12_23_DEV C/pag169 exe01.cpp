#include <stdio.h>
#include <locale.h>

// Fun��o para verificar se um n�mero � positivo, negativo ou zero
void verificarPositivoNegativo(int numero) {
    if (numero > 0) {
        printf("%d � positivo.\n", numero);
    } else if (numero < 0) {
        printf("%d � negativo.\n", numero);
    } else {
        printf("%d � zero.\n", numero);
    }
}

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    int numero;

    // Solicita ao usu�rio que insira um n�mero
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    // Chama a fun��o para verificar se o n�mero � positivo, negativo ou zero
    verificarPositivoNegativo(numero);

    return 0;
}

