#include <stdio.h>
#include <ctype.h>
#include <locale.h>

// Fun��o para contar o n�mero de vogais em um nome
int contarVogais(char *nome) {
    int contador = 0;

    while (*nome != '\0') {
        char caractere = tolower(*nome);  // Converte o caractere para min�sculo antes de verificar se � vogal
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            contador++;
        }
        nome++;
    }

    return contador;
}

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    char nome[100];

    // Solicita ao usu�rio que insira um nome
    printf("Digite um nome: ");
    scanf("%s", nome);

    // Chama a fun��o para contar o n�mero de vogais
    int resultado = contarVogais(nome);

    // Imprime o resultado
    printf("\nO n�mero de vogais no nome �: %d\n", resultado);

    return 0;
}

