#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_PALAVRAS 10
#define TAMANHO_MAXIMO_PALAVRA 50

// Função para gravar palavras em um arquivo
void gravarPalavrasEmArquivo() {
    FILE *arquivo;
    char palavra[TAMANHO_MAXIMO_PALAVRA];

    // Abre o arquivo para gravação
    arquivo = fopen("palavras.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para gravação.\n");
        exit(1);
    }

    // Solicita ao usuário que insira dez palavras e as grava no arquivo
    printf("Digite dez palavras para serem gravadas no arquivo:\n");
    for (int i = 0; i < MAX_PALAVRAS; i++) {
        printf("Palavra %d: ", i + 1);
        scanf("%s", palavra);
        fprintf(arquivo, "%s\n", palavra);
    }

    // Fecha o arquivo
    fclose(arquivo);
}

// Função para ler e imprimir palavras de um arquivo
void lerEImprimirPalavrasDoArquivo() {
    FILE *arquivo;
    char palavra[TAMANHO_MAXIMO_PALAVRA];

    // Abre o arquivo para leitura
    arquivo = fopen("palavras.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        exit(1);
    }

    // Lê e imprime as palavras do arquivo
    printf("\nPalavras gravadas no arquivo:\n");
    while (fscanf(arquivo, "%s", palavra) != EOF) {
        printf("%s\n", palavra);
    }

    // Fecha o arquivo
    fclose(arquivo);
}

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    // Grava palavras no arquivo
    gravarPalavrasEmArquivo();

    // Lê e imprime as palavras do arquivo
    lerEImprimirPalavrasDoArquivo();

    return 0;
}


