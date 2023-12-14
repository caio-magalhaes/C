/* Escreva um programa que leia um número inteiro e apresente seu ante-
cessor e seu sucessor. */

#include <stdio.h>

int main()
{
    int num, ant, suc;
    printf("Digite o número: ");
    scanf("%d", &num);
    ant = num - 1;
    suc = num + 1;
    printf("O antecessor é: %d", ant);
    printf("\nO sucessor é: %d\n", suc);
    return 0;
}

/* 
Solução alternativa
#include <stdio.h>
int main()
{
int
num;
}
printf(“Digite o número: “);
scanf (“%d”, &num);
printf(“\n O antecessor é: %d”, num-1);
printf(“\n O sucessor é: %d”, num+1);
re
 */