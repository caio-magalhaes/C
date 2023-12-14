//� muito comum que programas tenham de implementar funcionalidades para identificar caracter�sticas espec�ficas e realizar opera��es sobre um conjunto de dados.//
//Dessa forma, fa�a um programa que apresenta a soma de todos os n�meros inteiros �mpares entre 200 e 500. //

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    int soma = 0;

    // Calcula a soma dos n�meros �mpares entre 200 e 500
    for (int i = 201; i <= 499; i += 2) {
        soma += i;
    }

    // Apresenta o resultado
    printf("A soma dos n�meros �mpares entre 200 e 500 �: %d\n", soma);

    return 0;
}

