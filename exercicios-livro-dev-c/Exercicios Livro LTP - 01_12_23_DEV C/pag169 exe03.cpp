#include <stdio.h>
#include <ctype.h>
#include <locale.h>

// Fun��o para verificar se um caractere � vogal (retorna 0) ou consoante/n�mero/caractere especial (retorna 1)
int verificarCaractere(char c) {
    // Converte o caractere para min�sculo
    c = tolower(c);

    if ((c >= 'a' && c <= 'z') && (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')) {
        return 1;  // Consoante
    } else if (c >= '0' && c <= '9') {
        return 1;  // N�mero
    } else {
        return 0;  // Vogal ou caractere especial
    }
}

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    char caractere;

    // Solicita ao usu�rio que insira um caractere
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    // Chama a fun��o para verificar o tipo de caractere
    int resultado = verificarCaractere(caractere);

    // Imprime o resultado
    if (resultado == 0) {
        printf("\nO caractere %c � uma vogal.\n", caractere);
    } else {
        printf("\nO caractere %c � uma consoante, n�mero ou caractere especial.\n", caractere);
    }

    return 0;
}

