/* 
É muito comum que programas tenham de implementar funcionalidades para iden-
tificar características específicas e realizar operações sobre um conjunto de dados.
Dessa forma, faça um programa que apresenta a soma de todos os números inteiros
ímpares entre 200 e 500.
 */
#include <stdio.h>
int main(){
    int sum = 0, i = 0;
    
    for ( i = 200; i <= 500; i += 1)
    {
        if( i % 2 != 0) sum += i;
    }
    printf("A soma é igual a:%d", sum);
    return 0;
}