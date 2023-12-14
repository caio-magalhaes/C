#include <stdio.h>
#include <locale.h>

// Fun��o para converter o valor em reais para d�lares
float converterParaDolares(float cotacao, float valorEmReais) {
    return valorEmReais / cotacao;
}

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    float cotacao, valorEmReais;

    // Solicita ao usu�rio que insira a cota��o do d�lar
    printf("Digite a cota��o do d�lar: ");
    scanf("%f", &cotacao);

    // Solicita ao usu�rio que insira o valor em reais
    printf("Digite o valor em reais: ");
    scanf("%f", &valorEmReais);

    // Chama a fun��o para converter o valor para d�lares
    float resultado = converterParaDolares(cotacao, valorEmReais);

    // Imprime o resultado
    printf("\nO valor em d�lares �: %.2f\n", resultado);

    return 0;
}

