// Em algumas situa��es, em uma aplica��o, � preciso determinar quais s�o os n�meros m�ltiplos de um ou mais valores, dentre todos os valores de um conjunto de dados. Dessa forma, fa�a um programa que leia um n�mero e informese ele � divis�vel por tr�s e por sete

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    int numero;

    // Solicita ao usu�rio que insira um n�mero
    printf("Informe um n�mero: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � divis�vel por tr�s e por sete
    if (numero % 3 == 0 && numero % 7 == 0) {
        printf("%d � divis�vel por tr�s e por sete.\n", numero);
    } else {
        printf("%d n�o � divis�vel por tr�s e por sete.\n", numero);
    }

    return 0;
}

