/* 
Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e
apresente o valor do rendimento e o valor total (valor do depósito + valor do rendimento).
 */
#include <stdio.h>
int main()
{
float deposito, taxa, rendimento, total;
printf(" Informe o valor do depósito:");
scanf ("%f", &deposito);
printf("\n Informe a taxa de juros:");
scanf ("%f", &taxa);
rendimento = deposito * (taxa/100);
total = deposito + rendimento;
printf("\n O rendimento é: %.2f", rendimento);
printf("\n O total é: %.2f", total);
return (0);
}