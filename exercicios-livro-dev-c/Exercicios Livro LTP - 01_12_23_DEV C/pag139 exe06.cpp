#include <stdio.h>
#include <locale.h>
#include <string.h>

#define NUM_ALUNOS 5
#define NUM_NOTAS 4

typedef struct {
    char nome[50];
    float notas[NUM_NOTAS];
    float media;
} Aluno;

void ordenarPorMedia(Aluno alunos[], int numAlunos) {
    // Implementação de um algoritmo de ordenação (Bubble Sort) para ordenar os alunos por média
    for (int i = 0; i < numAlunos - 1; i++) {
        for (int j = 0; j < numAlunos - i - 1; j++) {
            if (alunos[j].media > alunos[j + 1].media) {
                // Troca os alunos de posição
                Aluno temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    Aluno alunos[NUM_ALUNOS];

    // Leitura dos dados dos alunos
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite as quatro notas bimestrais do aluno %d:\n", i + 1);
        for (int j = 0; j < NUM_NOTAS; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }

        // Cálculo da média do aluno
        alunos[i].media = 0;
        for (int j = 0; j < NUM_NOTAS; j++) {
            alunos[i].media += alunos[i].notas[j];
        }
        alunos[i].media /= NUM_NOTAS;
    }

    // Ordena os alunos por média
    ordenarPorMedia(alunos, NUM_ALUNOS);

    // Apresenta os alunos classificados por média
    printf("\nAlunos classificados por média crescente:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("%s - Média: %.2f\n", alunos[i].nome, alunos[i].media);
    }

    return 0;
}

