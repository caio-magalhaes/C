// Imagine que voc� esteja ensinando a tabuada para uma crian�a e precisa mostrar a ela todas as poss�veis multiplica��es entre os n�meros que v�o de um at� dez. //
//Assim, elabore um programa que imprima a tabuada do um ao dez.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    for (int i = 1; i <= 10; i++) {
        printf("Tabuada do %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");  // Adiciona uma linha em branco entre as tabuadas
    }

    return 0;
}

