#include <stdio.h>
#include <locale.h>

#define NUM_CONTATOS 30
#define TAM_STRING 50

typedef struct {
    char nome[TAM_STRING];
    char telefone[TAM_STRING];
    char email[TAM_STRING];
} Contato;

void cadastrarContatos(Contato contatos[], int numContatos) {
    for (int i = 0; i < numContatos; i++) {
        printf("\nCadastro do Contato %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", contatos[i].nome);

        printf("Telefone: ");
        scanf(" %[^\n]", contatos[i].telefone);

        printf("E-mail: ");
        scanf(" %[^\n]", contatos[i].email);
    }
}

void imprimirContatos(Contato contatos[], int numContatos) {
    printf("\nListagem de Contatos:\n");
    for (int i = 0; i < numContatos; i++) {
        printf("\nContato %d:\n", i + 1);
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %s\n", contatos[i].telefone);
        printf("E-mail: %s\n", contatos[i].email);
    }
}

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    Contato contatos[NUM_CONTATOS];

    // Cadastro dos contatos
    cadastrarContatos(contatos, NUM_CONTATOS);

    // Impressão dos contatos cadastrados
    imprimirContatos(contatos, NUM_CONTATOS);

    return 0;
}

