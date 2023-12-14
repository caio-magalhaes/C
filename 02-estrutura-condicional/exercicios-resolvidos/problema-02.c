/* Elabore um programa que receba o nome e
a idade de uma pessoa e informe
o nome, a idade e o valor da mensalidade do
plano de saúde. A tabela a seguir
apresenta os valores de mensalidade:
 */
/* 
Até 18 anosR$ 50,00
De 19 a 29 anosR$ 70,00
De 30 a 45 anosR$ 90,00
De 46 a 65 anosR$ 130,00
Acima de 65 anosR$ 170,00 
*/
#include <stdio.h>

int main()
{
    char name[30];
    int age;
    printf("Digite o seu nome: \n");
    scanf("%s", name);
    printf("Digite a sua idade: \n");
    scanf("%d", &age);
    printf("Nome: %s\n", name);
    printf("Idade: %d\n", age);
    if (age <= 18){
        printf("O valor do plano é: R$50,00\n");
    }
    else{
            if ((age >= 19) && (age <= 29))
            {
                printf("O valor do plano é: R$70,00\n");
            }
            else
            {
                if ((age >= 30) && (age <= 45))
                {
                    printf("O valor do plano é: R$90,00\n");
                }
                else
                {
                    if ((age >= 46) && (age <= 65))
                    {
                        printf("O valor do plano é:R$130,00\n");
                    }
                    else
                    {
                        printf("O valor do plano é:R$170,00\n");
                    }
                }
            }
        }
return (0);
    }
