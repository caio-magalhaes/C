// Faça um programa que receba o código do estado de origem da carga de um caminhão, o peso da carga em toneladas e o código dela. 

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    int codigoEstado, codigoCarga;
    float pesoCarga, pesoCargaEmQuilos, precoPorQuilo, precoCarga, imposto, valorTotal;

    // Solicita ao usuário que insira o código do estado, o peso da carga e o código da carga
    printf("Informe o código do estado (1 a 4): ");
    scanf("%d", &codigoEstado);

    printf("Informe o peso da carga em toneladas: ");
    scanf("%f", &pesoCarga);

    printf("Informe o código da carga (10 a 40): ");
    scanf("%d", &codigoCarga);

    // Converte o peso da carga para quilos
    pesoCargaEmQuilos = pesoCarga * 1000;

    // Determina o preço por quilo com base no código da carga
    if (codigoCarga >= 10 && codigoCarga <= 20) {
        precoPorQuilo = 180;
    } else if (codigoCarga >= 21 && codigoCarga <= 30) {
        precoPorQuilo = 120;
    } else if (codigoCarga >= 31 && codigoCarga <= 40) {
        precoPorQuilo = 230;
    } else {
        printf("Código de carga inválido.\n");
        return 1;  // Retorna 1 para indicar erro
    }

    // Calcula o preço da carga
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
            printf("Código de estado inválido.\n");
            return 1;  // Retorna 1 para indicar erro
    }

    // Calcula o valor total da carga
    valorTotal = precoCarga + imposto;

    // Apresenta os resultados
    printf("Peso da carga em quilos: %.2f\n", pesoCargaEmQuilos);
    printf("Preço da carga: R$%.2f\n", precoCarga);
    printf("Valor do Imposto: R$%.2f\n", imposto);
    printf("Valor Total da Carga: R$%.2f\n", valorTotal);

    return 0;
}

