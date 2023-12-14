/* 
Construa um programa que receba um número 
inteiro maior que um e
verifique se ele é primo.
 */
#include <stdio.h>
int main()
{
    int num, i, qtdade;
    printf("Informe o número:\n" );
    scanf("%d", &num);
    qtdade = 0;
    for (i=1; i<=num; i++){
        if (num % i == 0)qtdade ++;
    }
    if (qtdade == 2) printf ("O número e primo.\n");
    else printf ("Não e primo.\n");
    return (0);
}