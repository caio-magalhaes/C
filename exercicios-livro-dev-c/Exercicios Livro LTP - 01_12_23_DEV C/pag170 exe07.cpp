#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_PALAVRAS 10
#define TAMANHO_MAXIMO_PALAVRA 50

// Fun��o para gravar palavras em um arquivo
void gravarPalavrasEmArquivo() {
    FILE *arquivo;
    char palavra[TAMANHO_MAXIMO_PALAVRA];

    // Abre o arquivo para grava��o
    arquivo = fopen("palavras.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para grava��o.\n");
        exit(1);
    }

    // Solicita ao usu�rio que insira dez palavras e as grava no arquivo
    printf("Digite dez palavras para serem gravadas no arquivo:\n");
    for (int i = 0; i < MAX_PALAVRAS; i++) {
        printf("Palavra %d: ", i + 1);
        scanf("%s", palavra);
        fprintf(arquivo, "%s\n", palavra);
    }

    // Fecha o arquivo
    fclose(arquivo);
}

// Fun��o para ler e imprimir palavras de um arquivo
void lerEImprimirPalavrasDoArquivo() {
    FILE *arquivo;
    char palavra[TAMANHO_MAXIMO_PALAVRA];

    // Abre o arquivo para leitura
    arquivo = fopen("palavras.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        exit(1);
    }

    // L� e imprime as palavras do arquivo
    printf("\nPalavras gravadas no arquivo:\n");
    while (fscanf(arquivo, "%s", palavra) != EOF) {
        printf("%s\n", palavra);
    }

    // Fecha o arquivo
    fclose(arquivo);
}

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    // Grava palavras no arquivo
    gravarPalavrasEmArquivo();

    // L� e imprime as palavras do arquivo
    lerEImprimirPalavrasDoArquivo();

    return 0;
}


