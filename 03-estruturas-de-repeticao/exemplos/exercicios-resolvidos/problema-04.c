/* 
Elabore um programa que apresente todos os números divisíveis 
por três que
sejam menores que 100
 */
#include <stdio.h>

int main(){
    int i;
    for(i = 1; i < 100; i+= 1){
        if( i % 3 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}