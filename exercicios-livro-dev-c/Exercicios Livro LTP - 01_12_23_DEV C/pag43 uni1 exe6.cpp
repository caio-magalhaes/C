/* insere o conte�do do arquivo stdio.h */
#include <stdio.h>
int main()
{ /* declara��o das vari�veis */
int num1, num2, total;
/*entrada de dados */
/*mensagem ao usu�rio */
printf("\nDigite o primeiro numero: ");
/* leitura do primeiro n�mero */
scanf("%d", &num1);
/*mensagem ao usu�rio */
printf("\nDigite o segundo numero:");
/* leitura do segundo n�mero*/
scanf("%d", &num2);
/* processamento */
/*c�lculo do ano de nascimento */
total = num1 + num2;
/*saida de dados */
printf ("\n A soma dos numeros e: %d ", total);
return (0);
}
