// p�gina 74 exe 01

#include <stdio.h>
int main()
{
int num;
int maior, menor, i;
printf ("Digite o 1� n�mero: \n");
scanf ("%d", &num);
maior = num;
menor = num;
printf ("Digite o 2� n�mero: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf ("Digite o 3� n�mero: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf ("Digite o 4� n�mero: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf ("Digite o 5� n�mero: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf("O maior � %d\n", maior);
printf("O menor � %d\n", menor);
return (0);
}
