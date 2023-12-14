#include <stdio.h>
#include <locale.h>

#define NUM_LIVROS 20
#define TAM_STRING 50

typedef struct {
    char titulo[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
    int ano;
} Livro;

void cadastrarLivros(Livro livros[], int numLivros) {
    for (int i = 0; i < numLivros; i++) {
        printf("\nCadastro do Livro %d:\n", i + 1);

        printf("Título: ");
        scanf(" %[^\n]", livros[i].titulo);

        printf("Autor: ");
        scanf(" %[^\n]", livros[i].autor);

        printf("Editora: ");
        scanf(" %[^\n]", livros[i].editora);

        printf("Edição: ");
        scanf("%d", &livros[i].edicao);

        printf("Ano: ");
        scanf("%d", &livros[i].ano);
    }
}

void imprimirLivros(Livro livros[], int numLivros) {
    printf("\nListagem de Livros:\n");
    for (int i = 0; i < numLivros; i++) {
        printf("\nLivro %d:\n", i + 1);
        printf("Título: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Editora: %s\n", livros[i].editora);
        printf("Edição: %d\n", livros[i].edicao);
        printf("Ano: %d\n", livros[i].ano);
    }
}

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    Livro livros[NUM_LIVROS];

    // Cadastro dos livros
    cadastrarLivros(livros, NUM_LIVROS);

    // Impressão dos livros cadastrados
    imprimirLivros(livros, NUM_LIVROS);

    return 0;
}

