/* Elabore um programa que receba quatro notas e calcule a 
média aritmética entre elas. */

#include <stdio.h>

int main(){
    /* declara variaveis */
    float nota01, nota02, nota03, nota04;
    /* Entrada */
    printf("Digite quantro notas: \n");
    scanf("%f %f %f %f", &nota01, &nota02, &nota03, &nota04);
    /* Processamento e saida */
    printf("A média aritimética é: %.2f \n",(nota01+nota02+nota03+nota04)/4);

    return(0);
};

/* 
Gabarito
#include <stdio.h>
int main()
{
float n1, n2, n3, n4, media;
}
printf(“\n Digite a nota 1:”);
scanf (“%f”, &n1);
printf(“\n Digite a nota 2:”);
scanf (“%f”, &n2);
printf(“\n Digite a nota 3:”);
scanf (“%f”, &n3);
printf(“\n Digite a nota 4:”);
scanf (“%f”, &n4);
media = (n1 + n2 + n3 + n4)/4;
printf(“\n A média e: %.2f \n”, media);
return (0);
 */