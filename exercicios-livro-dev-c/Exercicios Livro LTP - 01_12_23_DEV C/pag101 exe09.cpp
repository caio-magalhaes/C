#include <stdio.h>
#include <string.h>
#include <ctype.h>  // Adicionada a biblioteca ctype.h para utilizar a função toupper
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    char nomeComodo[50];
    float largura, comprimento, areaTotal = 0;

    printf("Informe os dados dos cômodos (digite 'FIM' para encerrar):\n");

    // Loop para solicitar dados dos cômodos até que o nome seja 'FIM'
    while (1) {
        // Solicita ao usuário que insira os dados do cômodo
        printf("Nome do Cômodo: ");
        scanf("%s", nomeComodo);

        // Converte o nome do cômodo para letras maiúsculas para facilitar comparação
        for (int i = 0; nomeComodo[i]; i++) {
            nomeComodo[i] = toupper((unsigned char)nomeComodo[i]);  // Correção aqui
        }

        // Verifica se o usuário deseja encerrar o programa
        if (strcmp(nomeComodo, "FIM") == 0) {
            break;
        }

        printf("Largura do Cômodo (metros): ");
        scanf("%f", &largura);

        printf("Comprimento do Cômodo (metros): ");
        scanf("%f", &comprimento);

        // Calcula a área do cômodo e acumula na área total
        float areaComodo = largura * comprimento;
        areaTotal += areaComodo;

        // Apresenta a área do cômodo
        printf("Área do Cômodo: %.2f metros quadrados\n\n", areaComodo);
    }

    // Apresenta a área total da residência
    printf("Área Total da Residência: %.2f metros quadrados\n", areaTotal);

    return 0;
}

