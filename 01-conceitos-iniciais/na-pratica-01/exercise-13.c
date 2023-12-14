/* Identifique os erros sintático e 
semânticos no programa a seguir, cujo 
objetivo é ler
dois números e apresentar a soma entre os 
dois. */

/* insere conteúdo do arquivo stdio.h */
#include <stdio.h>
int main()
{ /* declaração das variáveis */
int num1, num2, total;
/*entrada de dados */
/*mensagem ao usuário */
printf("\nDigite o primeiro número: ");
/* leitura do primeiro número */
scanf("%d", num1); /* ERRO 01 - FALTA O & */
/*mensagem ao usuário */
printf("\nDigite o segundo número:");
/* leitura do segundo número*/
scanf("%d", &num2);
/* processamento */
/*cálculo do ano de nascimento */
total = num1 + num2;
/*saída de dados */
printf ("\n A soma dos números é : %d ", soma);
/* ERRO 02 - VARIAVEL SOMA NÃO FOI DEFINIDA */
return (0);
}