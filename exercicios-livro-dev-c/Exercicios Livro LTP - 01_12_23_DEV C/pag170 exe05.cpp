#include <stdio.h>
#include <ctype.h>
#include <locale.h>

// Função para contar o número de vogais em um nome
int contarVogais(char *nome) {
    int contador = 0;

    while (*nome != '\0') {
        char caractere = tolower(*nome);  // Converte o caractere para minúsculo antes de verificar se é vogal
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            contador++;
        }
        nome++;
    }

    return contador;
}

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    char nome[100];

    // Solicita ao usuário que insira um nome
    printf("Digite um nome: ");
    scanf("%s", nome);

    // Chama a função para contar o número de vogais
    int resultado = contarVogais(nome);

    // Imprime o resultado
    printf("\nO número de vogais no nome é: %d\n", resultado);

    return 0;
}

