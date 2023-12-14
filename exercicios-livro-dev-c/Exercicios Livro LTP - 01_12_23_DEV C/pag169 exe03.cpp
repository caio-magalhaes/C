#include <stdio.h>
#include <ctype.h>
#include <locale.h>

// Função para verificar se um caractere é vogal (retorna 0) ou consoante/número/caractere especial (retorna 1)
int verificarCaractere(char c) {
    // Converte o caractere para minúsculo
    c = tolower(c);

    if ((c >= 'a' && c <= 'z') && (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')) {
        return 1;  // Consoante
    } else if (c >= '0' && c <= '9') {
        return 1;  // Número
    } else {
        return 0;  // Vogal ou caractere especial
    }
}

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    char caractere;

    // Solicita ao usuário que insira um caractere
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    // Chama a função para verificar o tipo de caractere
    int resultado = verificarCaractere(caractere);

    // Imprime o resultado
    if (resultado == 0) {
        printf("\nO caractere %c é uma vogal.\n", caractere);
    } else {
        printf("\nO caractere %c é uma consoante, número ou caractere especial.\n", caractere);
    }

    return 0;
}

