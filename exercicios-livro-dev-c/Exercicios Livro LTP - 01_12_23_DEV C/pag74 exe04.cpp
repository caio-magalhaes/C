// Elabore um programa que receba o sal�rio de um funcion�rio e o c�digo do cargo e apresente o cargo, o valor do aumento e o novo sal�rio. 

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    int codigoCargo;
    float salario, aumento, novoSalario;

    // Solicita ao usu�rio que insira o c�digo do cargo e o sal�rio
    printf("Informe o c�digo do cargo (1 a 4): ");
    scanf("%d", &codigoCargo);

    printf("Informe o sal�rio do funcion�rio: ");
    scanf("%f", &salario);

    // Calcula o aumento de acordo com o c�digo do cargo
    switch (codigoCargo) {
        case 1:
            aumento = salario * 0.4;
            printf("Cargo: Servente\n");
            break;
        case 2:
            aumento = salario * 0.35;
            printf("Cargo: Pedreiro\n");
            break;
        case 3:
            aumento = salario * 0.2;
            printf("Cargo: Mestre de Obras\n");
            break;
        case 4:
            aumento = salario * 0.1;
            printf("Cargo: T�cnico de Seguran�a\n");
            break;
        default:
            printf("C�digo de cargo inv�lido.\n");
            return 1;  // Retorna 1 para indicar erro
    }

    // Calcula o novo sal�rio
    novoSalario = salario + aumento;

    // Apresenta o valor do aumento e o novo sal�rio
    printf("Valor do Aumento: R$%.2f\n", aumento);
    printf("Novo Sal�rio: R$%.2f\n", novoSalario);

    return 0;
}

