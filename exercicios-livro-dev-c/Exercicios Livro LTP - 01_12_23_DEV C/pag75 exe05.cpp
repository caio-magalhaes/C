// Fa�a um programa que receba o c�digo do estado de origem da carga de um caminh�o, o peso da carga em toneladas e o c�digo dela. 

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    int codigoEstado, codigoCarga;
    float pesoCarga, pesoCargaEmQuilos, precoPorQuilo, precoCarga, imposto, valorTotal;

    // Solicita ao usu�rio que insira o c�digo do estado, o peso da carga e o c�digo da carga
    printf("Informe o c�digo do estado (1 a 4): ");
    scanf("%d", &codigoEstado);

    printf("Informe o peso da carga em toneladas: ");
    scanf("%f", &pesoCarga);

    printf("Informe o c�digo da carga (10 a 40): ");
    scanf("%d", &codigoCarga);

    // Converte o peso da carga para quilos
    pesoCargaEmQuilos = pesoCarga * 1000;

    // Determina o pre�o por quilo com base no c�digo da carga
    if (codigoCarga >= 10 && codigoCarga <= 20) {
        precoPorQuilo = 180;
    } else if (codigoCarga >= 21 && codigoCarga <= 30) {
        precoPorQuilo = 120;
    } else if (codigoCarga >= 31 && codigoCarga <= 40) {
        precoPorQuilo = 230;
    } else {
        printf("C�digo de carga inv�lido.\n");
        return 1;  // Retorna 1 para indicar erro
    }

    // Calcula o pre�o da carga
    precoCarga = pesoCargaEmQuilos * precoPorQuilo;

    // Calcula o imposto
    switch (codigoEstado) {
        case 1:
            imposto = precoCarga * 0.05;
            break;
        case 2:
            imposto = precoCarga * 0.08;
            break;
        case 3:
            imposto = precoCarga * 0.12;
            break;
        case 4:
            imposto = precoCarga * 0.15;
            break;
        default:
            printf("C�digo de estado inv�lido.\n");
            return 1;  // Retorna 1 para indicar erro
    }

    // Calcula o valor total da carga
    valorTotal = precoCarga + imposto;

    // Apresenta os resultados
    printf("Peso da carga em quilos: %.2f\n", pesoCargaEmQuilos);
    printf("Pre�o da carga: R$%.2f\n", precoCarga);
    printf("Valor do Imposto: R$%.2f\n", imposto);
    printf("Valor Total da Carga: R$%.2f\n", valorTotal);

    return 0;
}

