/* 
Elabore um programa que receba o salário de 
um funcionário e o código do
cargo e apresente o cargo, o valor do 
aumento e o novo salário. A tabela a
seguir apresenta os cargos.
 */
/* 
CódigoCargoPercentual do aumento
1Servente40%
2Pedreiro35%
3Mestre de obras20%
4Técnico de segurança10%
 */
#include <stdio.h>

int main(){
    float salario;
    int codigo;
    printf("Digite o salário e o código do cargo: \n");
    scanf("%f %i", &salario, &codigo);

    switch (codigo)
    {
    case 1:
        salario *= 1.40;
        printf("O cargo é: Servente\n O aumento é de: 40%%\nO novo salário é:%f", salario);
        break;
     case 2:
        salario *= 1.35;
        printf("O cargo é: Pedreiro\n O aumento é de: 35%%\nO novo salário é:%f", salario);
        break;
     case 3:
        salario *= 1.20;
        printf("O cargo é: Mestre de obras\n O aumento é de: 20%%\nO novo salário é:%f", salario);
        break;
     case 4:
        salario *= 1.10;
        printf("O cargo é: Técnico de segurança\n O aumento é de: 10%%\nO novo salário é:%f", salario);
        break;
    
    default:
        break;
    }

    return 0;
}