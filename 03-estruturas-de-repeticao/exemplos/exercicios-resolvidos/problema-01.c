/* 
O problema consiste em ler um conjunto de 
números inteiros e contar a
quantidade de números pares e ímpares. A 
leitura deve ser realizada até
que seja lido o valor zero.
A entrada de dados consiste na leitura de 
números inteiros repetidas ve-
zes, até que o valor zero seja digitado. O 
processamento é contar a quantidade
de números pares e ímpares. E a saída é 
informar quantos dos números lidos
na entrada são pares e quantos são ímpares. 
No Quadro 4, é apresentado um
programa para este problema, utilizando a 
estrutura while, e no Quadro 5,
utilizando a estrutura do-while
 */
#include <stdio.h>
int main(){
    int qtdPares, qtdImpares, num;
    qtdPares = 0;
    qtdImpares = 0;
    printf("Informe o número: \n");
    scanf("%d", &num);
    while (num != 0)
    {
        if( num % 2 == 0){
            qtdPares += 1;
        }
        else{ qtdImpares += 1;}
        printf("Informe o número: \n");
        scanf("%d", &num);
    }
    printf("A quantidade de pares é : %d\n", qtdPares);
    printf("A quantidade de impares é : %d\n", qtdImpares);
    
    return 0;
}