#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    int idade, quantidadeCasadas = 0, quantidadeSolteiras = 0, quantidadeSeparadas = 0, quantidadeViuvas = 0;
    float peso, somaIdade = 0, somaPeso = 0;
    char sexo, estadoCivil;

    printf("Informe os dados das pessoas (digite 0 para idade para encerrar):\n");

    do {
        // Solicita ao usuário que insira os dados da pessoa
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade != 0) {
            printf("Peso: ");
            scanf("%f", &peso);

            printf("Sexo (M/F): ");
            scanf(" %c", &sexo);  // Utiliza um espaço antes do %c para evitar problemas com a quebra de linha anterior

            printf("Estado Civil (C/S/E/V): ");
            scanf(" %c", &estadoCivil);

            // Atualiza as contagens e somas
            switch (estadoCivil) {
                case 'C':
                    quantidadeCasadas++;
                    break;
                case 'S':
                    quantidadeSolteiras++;
                    break;
                case 'E':
                    quantidadeSeparadas++;
                    break;
                case 'V':
                    quantidadeViuvas++;
                    break;
            }

            somaIdade += idade;
            somaPeso += peso;
        }

    } while (idade != 0);

    // Calcula a média de idade e peso
    int quantidadeTotal = quantidadeCasadas + quantidadeSolteiras + quantidadeSeparadas + quantidadeViuvas;

    if (quantidadeTotal > 0) {
        float mediaIdade = somaIdade / quantidadeTotal;
        float mediaPeso = somaPeso / quantidadeTotal;

        // Apresenta os resultados
        printf("\nEstatísticas:\n");
        printf("Casadas: %d\n", quantidadeCasadas);
        printf("Solteiras: %d\n", quantidadeSolteiras);
        printf("Separadas: %d\n", quantidadeSeparadas);
        printf("Viuvas: %d\n", quantidadeViuvas);
        printf("Média de Idade: %.2f\n", mediaIdade);
        printf("Média de Peso: %.2f\n", mediaPeso);
    } else {
        printf("Nenhum dado informado.\n");
    }

    return 0;
}

