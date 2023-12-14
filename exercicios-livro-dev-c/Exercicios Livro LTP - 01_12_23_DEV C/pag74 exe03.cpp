//Considere uma aplicação que necessita de um calendário embutido. Assim sendo,construa um programa que, dado um número inteiro, informe o mês correspondente.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    int numero;

    // Solicita ao usuário que insira um número de 1 a 12
    printf("Informe um numero de 1 a 12 para representar um mes: ");
    scanf("%d", &numero);

    // Verifica se o número está dentro do intervalo válido (1 a 12)
    if (numero >= 1 && numero <= 12) {
        // Utiliza um switch para associar o número ao nome do mês
        switch (numero) {
            case 1:
                printf("Janeiro\n");
                break;
            case 2:
                printf("Fevereiro\n");
                break;
            case 3:
                printf("Março\n");
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

