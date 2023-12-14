// página 74 exe 01

#include <stdio.h>
int main()
{
int num;
int maior, menor, i;
printf ("Digite o 1º número: \n");
scanf ("%d", &num);
maior = num;
menor = num;
printf ("Digite o 2º número: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf ("Digite o 3º número: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf ("Digite o 4º número: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf ("Digite o 5º número: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf("O maior é %d\n", maior);
printf("O menor é %d\n", menor);
return (0);
}
