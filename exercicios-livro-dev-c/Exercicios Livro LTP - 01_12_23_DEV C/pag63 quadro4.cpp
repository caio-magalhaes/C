#include <stdio.h>
int main()
{
float num1, num2, resultado;
int op;
printf("Digite o primeiro numero:\n");
scanf("%f", &num1);
printf("Digite o segundo numero:\n");
scanf("%f", &num2);
printf("Escolha a operacao: \n 1 - Soma \n 2 - Subtracao \n 3 - Multiplicacao \n 4 - Divisao \n" );
scanf("%d", &op);
if (op == 1) {
resultado = num1 + num2;
printf ("A soma e: %.3f\n", resultado);
}
else {
if (op == 2) {
     resultado = num1 - num2;
     printf ("A subtracao e: %.3f\n", resultado);
}
    else {
if (op == 3) {
    resultado = num1 * num2;
    printf ("A multiplicacao e: %.3f\n" , resultado);
}
    else
{
      resultado = num1 / num2;
      printf ("A divisao e: %.3f\n", resultado);
}
}
}
return (0);
}
