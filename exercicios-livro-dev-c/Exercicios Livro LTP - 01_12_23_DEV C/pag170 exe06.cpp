#include <stdio.h>
#include <locale.h>

// Função para converter o valor em reais para dólares
float converterParaDolares(float cotacao, float valorEmReais) {
    return valorEmReais / cotacao;
}

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    float cotacao, valorEmReais;

    // Solicita ao usuário que insira a cotação do dólar
    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacao);

    // Solicita ao usuário que insira o valor em reais
    printf("Digite o valor em reais: ");
    scanf("%f", &valorEmReais);

    // Chama a função para converter o valor para dólares
    float resultado = converterParaDolares(cotacao, valorEmReais);

    // Imprime o resultado
    printf("\nO valor em dólares é: %.2f\n", resultado);

    return 0;
}

