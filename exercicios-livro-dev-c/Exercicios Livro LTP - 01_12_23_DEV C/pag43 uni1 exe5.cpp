#include <stdio.h>
#include <math.h>
#define pi 3.141593
int main()
{
float r; // r (raio da circunfer�ncia)
printf(" Digite o valor do raio: ");
scanf("%f", &r);
printf("\n Valor da area: %f", pi * pow(r,2));
printf("\n Valor da Perimetro: %f", 2 * pi * r);
return (0);
}
