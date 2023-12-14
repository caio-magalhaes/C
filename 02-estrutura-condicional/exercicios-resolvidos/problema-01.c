/* Faça um programa que leia um número e 
informe se ele é divisível por cinco. */
#include <stdio.h>
int main(){
    int num;
    printf("Informe o número:\n");
    scanf("%d",&num);
    if( num % 5 == 0)
        printf("O número %d é divisivel por 5\n", num);
    else
       printf("O número %d não é divisivel por 5\n",num);
    return(0);
}