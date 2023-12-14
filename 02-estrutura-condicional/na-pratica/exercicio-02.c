/* 
Em algumas situações, em uma aplicação, é preciso determinar 
quais são os
números múltiplos de um ou mais valores, dentre todos os 
valores de um con-
junto de dados. Dessa forma, faça um programa que leia um 
número e informe
se ele é divisível por três e por sete.
 */

#include <stdio.h>
main(){
    int n1;
    printf("Digite um número: \n");
    scanf("%d", n1);
    if( n1 %  3 == 0){
        printf("%d é divisivel por 3.",n1);
    }
    else{
        printf("%d não é divisivel por 3", n1);
    }
    if( n1 %  7 == 0){
        printf("%d é divisivel por 7.",n1);
    }
    else{
        printf("%d não é divisivel por 7", n1);
    }

    return 0;
}