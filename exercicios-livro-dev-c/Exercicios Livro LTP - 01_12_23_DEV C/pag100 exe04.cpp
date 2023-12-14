//É muito comum que programas tenham de implementar funcionalidades para identificar características específicas e realizar operações sobre um conjunto de dados.//
//Dessa forma, faça um programa que apresenta a soma de todos os números inteiros ímpares entre 200 e 500. //

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    int soma = 0;

    // Calcula a soma dos números ímpares entre 200 e 500
    for (int i = 201; i <= 499; i += 2) {
        soma += i;
    }

    // Apresenta o resultado
    printf("A soma dos números ímpares entre 200 e 500 é: %d\n", soma);

    return 0;
}

