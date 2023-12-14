// Elabore um programa que receba o salário de um funcionário e o código do cargo e apresente o cargo, o valor do aumento e o novo salário. 

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    int codigoCargo;
    float salario, aumento, novoSalario;

    // Solicita ao usuário que insira o código do cargo e o salário
    printf("Informe o código do cargo (1 a 4): ");
    scanf("%d", &codigoCargo);

    printf("Informe o salário do funcionário: ");
    scanf("%f", &salario);

    // Calcula o aumento de acordo com o código do cargo
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
            printf("Cargo: Técnico de Segurança\n");
            break;
        default:
            printf("Código de cargo inválido.\n");
            return 1;  // Retorna 1 para indicar erro
    }

    // Calcula o novo salário
    novoSalario = salario + aumento;

    // Apresenta o valor do aumento e o novo salário
    printf("Valor do Aumento: R$%.2f\n", aumento);
    printf("Novo Salário: R$%.2f\n", novoSalario);

    return 0;
}

