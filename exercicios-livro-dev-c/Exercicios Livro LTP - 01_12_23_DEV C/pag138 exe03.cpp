#include <stdio.h>
#include <string.h>
#include <locale.h>

int ehVogal(char letra) {
    // Fun��o que verifica se a letra � uma vogal
    char vogais[] = "aeiouAEIOU";
    for (int i = 0; i < strlen(vogais); i++) {
        if (letra == vogais[i]) {
            return 1;  // Retorna 1 se a letra for uma vogal
        }
    }
    return 0;  // Retorna 0 se a letra n�o for uma vogal
}

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    char palavra[50];

    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    if (tamanho % 2 == 1) {
        // Se a palavra tem n�mero �mpar de caracteres, imprime suas vogais
        printf("\nVogais da palavra:\n");
        for (int i = 0; i < tamanho; i++) {
            if (ehVogal(palavra[i])) {
                printf("%c ", palavra[i]);
            }
        }
        printf("\n");
    } else {
        printf("\nA palavra n�o tem n�mero �mpar de caracteres.\n");
    }

    return 0;
}

