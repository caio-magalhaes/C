/* 
Para os seres humanos, trabalhar com séries numéricas sem o auxílio de ferramen-
tas computacionais pode ser um grande transtorno. Assim sendo, construa um
programa que leia o número de termos da série e imprima o valor de S.
 */
#include <stdio.h>
int main(){
    int num, i;
    float s;
    printf("Insira o número de termos da série: %d", num);
    scanf("%d", &num);
    for ( i = 1; i <= num; i+= 1)  
    {
        s += (1 / i);
    }
    printf("O valor de S é: %f", s);
    
    return 0;
}