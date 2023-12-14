/* insere o conteúdo do arquivo stdio.h */
#include <stdio.h>
int main()
{ /* declaração das variáveis */
int num1, num2, total;
/*entrada de dados */
/*mensagem ao usuário */
printf("\nDigite o primeiro numero: ");
/* leitura do primeiro número */
scanf("%d", &num1);
/*mensagem ao usuário */
printf("\nDigite o segundo numero:");
/* leitura do segundo número*/
scanf("%d", &num2);
/* processamento */
/*cálculo do ano de nascimento */
total = num1 + num2;
/*saida de dados */
printf ("\n A soma dos numeros e: %d ", total);
return (0);
}
