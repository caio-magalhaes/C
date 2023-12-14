#include <stdio.h>
#include <math.h>

int main() {
    int numero;

    printf("Digite o numero: \n");
    scanf("%d", &numero);

    if (numero % 3 == 0)
        printf("O numero e divisivel por 3.\n");
    else
        printf("O numero nao e divisivel por 3.\n");

    if (numero % 7 == 0)
        printf("O numero e divisivel por 7.\n");
    else
        printf("O numero nao e divisivel por 7.\n");

    return 0;
}

