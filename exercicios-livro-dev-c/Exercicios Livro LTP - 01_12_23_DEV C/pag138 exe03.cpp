#include <stdio.h>
#include <string.h>
#include <locale.h>

int ehVogal(char letra) {
    // Função que verifica se a letra é uma vogal
    char vogais[] = "aeiouAEIOU";
    for (int i = 0; i < strlen(vogais); i++) {
        if (letra == vogais[i]) {
            return 1;  // Retorna 1 se a letra for uma vogal
        }
    }
    return 0;  // Retorna 0 se a letra não for uma vogal
}

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    char palavra[50];

    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    if (tamanho % 2 == 1) {
        // Se a palavra tem número ímpar de caracteres, imprime suas vogais
        printf("\nVogais da palavra:\n");
        for (int i = 0; i < tamanho; i++) {
            if (ehVogal(palavra[i])) {
                printf("%c ", palavra[i]);
            }
        }
        printf("\n");
    } else {
        printf("\nA palavra não tem número ímpar de caracteres.\n");
    }

    return 0;
}

