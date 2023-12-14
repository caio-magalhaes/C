#include <stdio.h>
#include <string.h>
#include <ctype.h>  // Adicionada a biblioteca ctype.h para utilizar a fun��o toupper
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    char nomeComodo[50];
    float largura, comprimento, areaTotal = 0;

    printf("Informe os dados dos c�modos (digite 'FIM' para encerrar):\n");

    // Loop para solicitar dados dos c�modos at� que o nome seja 'FIM'
    while (1) {
        // Solicita ao usu�rio que insira os dados do c�modo
        printf("Nome do C�modo: ");
        scanf("%s", nomeComodo);

        // Converte o nome do c�modo para letras mai�sculas para facilitar compara��o
        for (int i = 0; nomeComodo[i]; i++) {
            nomeComodo[i] = toupper((unsigned char)nomeComodo[i]);  // Corre��o aqui
        }

        // Verifica se o usu�rio deseja encerrar o programa
        if (strcmp(nomeComodo, "FIM") == 0) {
            break;
        }

        printf("Largura do C�modo (metros): ");
        scanf("%f", &largura);

        printf("Comprimento do C�modo (metros): ");
        scanf("%f", &comprimento);

        // Calcula a �rea do c�modo e acumula na �rea total
        float areaComodo = largura * comprimento;
        areaTotal += areaComodo;

        // Apresenta a �rea do c�modo
        printf("�rea do C�modo: %.2f metros quadrados\n\n", areaComodo);
    }

    // Apresenta a �rea total da resid�ncia
    printf("�rea Total da Resid�ncia: %.2f metros quadrados\n", areaTotal);

    return 0;
}

