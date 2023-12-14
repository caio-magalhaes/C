/* Escreva um programa que leia um número positivo inteiro e apresente o quadrado
e a raiz quadrada deste número. */
#include <stdio.h>
#include <math.h>
int main(){
    int number;
    printf("Escreva um número inteiro: \n");
    scanf("%d", &number);
    printf("O quadrado de %d é %d \n", number, number * number);
    printf("A raiz quadrada de %d é %.2f\n",number, sqrt((double)number));

return(0);
}