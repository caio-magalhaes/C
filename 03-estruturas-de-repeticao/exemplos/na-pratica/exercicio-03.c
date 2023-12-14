/* 
Imagine que você esteja ensinando a tabuada para uma criança e precisa mostrar
a ela todas as possíveis multiplicações entre os números que vão de um até dez.
Assim, elabore um programa que imprima a tabuada do um ao dez.
 */
#include <stdio.h>
int main(){
    int multiplicador, multiplicando, produto;
    for ( multiplicador = 1; multiplicador <= 10; multiplicador += 1)
    {
        for ( multiplicando = 1; multiplicando <= 10; multiplicando += 1)
        {
            produto = multiplicador * multiplicando;
            printf("%d x %d = %d\n", multiplicador, multiplicando, produto);
        }
        
    }
    
    return 0;
}