#include <stdio.h>
int main()
{
int par, impar, num;
par = 0;
impar = 0;
printf("Informe o numero:");
scanf("%d", &num);
while (num !=0)
{
if (num % 2 == 0)
par++;
else
impar++;
printf("Informe o numero:\n");
scanf("%d", &num);
}
printf("A quantidade de par e : %d\n", par);
printf("A quantidade de impar e : %d\n", impar);
return (0);
}
