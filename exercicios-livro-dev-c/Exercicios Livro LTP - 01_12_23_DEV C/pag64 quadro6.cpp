#include <stdio.h>
int main()
{
float num1, num2, resultado;
int op;
printf("Digite o primeiro n�mero:\n");
scanf("%f", &num1);
printf("Digite o segundo n�mero:\n");
scanf("%f", &num2);
printf("Escolha a opera��o: \n 1 - Soma \n 2 - Subtra��o \n 3 - Multiplica��o \n 4 - Divis�o \n");
scanf("%d", &op);
if (op == 1) {
resultado = num1 + num2;
printf("A soma �: %.3f\n", resultado);
}
if (op == 2) {
resultado = num1 - num2;
printf("A subtra��o �: %.3f\n", resultado);
}
if (op == 3) {
resultado = num1 * num2;
printf("A multiplica��o �: %.3f\n", resultado);
}
if (op == 4) {
resultado = num1 / num2;
printf("A divis�o �: %.3f\n", resultado);
}
return (0);
}
