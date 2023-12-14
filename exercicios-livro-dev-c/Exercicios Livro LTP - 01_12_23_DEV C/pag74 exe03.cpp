//Considere uma aplica��o que necessita de um calend�rio embutido. Assim sendo,construa um programa que, dado um n�mero inteiro, informe o m�s correspondente.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    int numero;

    // Solicita ao usu�rio que insira um n�mero de 1 a 12
    printf("Informe um numero de 1 a 12 para representar um mes: ");
    scanf("%d", &numero);

    // Verifica se o n�mero est� dentro do intervalo v�lido (1 a 12)
    if (numero >= 1 && numero <= 12) {
        // Utiliza um switch para associar o n�mero ao nome do m�s
        switch (numero) {
            case 1:
                printf("Janeiro\n");
                break;
            case 2:
                printf("Fevereiro\n");
                break;
            case 3:
                printf("Mar�o\n");
                break;
            case 4:
                printf("Abril\n");
                break;
            case 5:
                printf("Maio\n");
                break;
            case 6:
                printf("Junho\n");
                break;
            case 7:
                printf("Julho\n");
                break;
            case 8:
                printf("Agosto\n");
                break;
            case 9:
                printf("Setembro\n");
                break;
            case 10:
                printf("Outubro\n");
                break;
            case 11:
                printf("Novembro\n");
                break;
            case 12:
                printf("Dezembro\n");
                break;
        }
    } else {
        printf("Numero invalido. Insira um numero de 1 a 12.\n");
    }

    return 0;
}

