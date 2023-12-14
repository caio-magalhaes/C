#include <stdio.h>
#include <locale.h>

// Função para verificar se um número é positivo, negativo ou zero
void verificarPositivoNegativo(int numero) {
    if (numero > 0) {
        printf("%d é positivo.\n", numero);
    } else if (numero < 0) {
        printf("%d é negativo.\n", numero);
    } else {
        printf("%d é zero.\n", numero);
    }
}

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    int numero;

    // Solicita ao usuário que insira um número
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Chama a função para verificar se o número é positivo, negativo ou zero
    verificarPositivoNegativo(numero);

    return 0;
}

