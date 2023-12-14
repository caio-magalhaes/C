/* 
É comum, em uma aplicação, ter de 
determinar quais números são o maior ou o
menor, dentre todos os valores de um 
conjunto de dados. Assim sendo, escreva
um programa que receba cinco números 
inteiros e apresente o maior e o menor.
 */
#include <stdio.h>
int main(){
    int n1, n2, n3, n4, n5, maiorNumero, menorNumero;
    printf("Digite cinco números inteiros: \n");
    scanf("%d %d %d %d %d", n1);
    maiorNumero = n1;
    menorNumero = n1;
    if( n2 > maiorNumero){ maiorNumero = n2;}
    if( n3 > maiorNumero){ maiorNumero = n3;}
    if( n4 > maiorNumero){ maiorNumero = n4;}
    if( n5 > maiorNumero){ maiorNumero = n5;}
    printf("O maior número é: %d", maiorNumero);
    if( n2 < menorNumero){ menorNumero = n2;}
    if( n3 < menorNumero){ menorNumero = n3;}
    if( n4 < menorNumero){ menorNumero = n4;}
    if( n5 < menorNumero){ menorNumero = n5;}
    printf("O menor número é: %d", menorNumero);
    return 0;
}