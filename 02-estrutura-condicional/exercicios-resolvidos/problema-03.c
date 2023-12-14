/* 
Construa um programa que receba a idade de uma pessoa e 
identifique sua classe
eleitoral: não eleitor (menor que 16 anos de idade), eleitor 
obrigatório (entre 18 e
65 anos) e eleitor facultativo (entre 16 e 18 anos e maior 
que 65 anos).
 */
#include <stdio.h>
int main(){
    int age;
    printf("Digite a sua idade: \n");
    scanf("%d", age);
    if(age < 16){
        printf("Não eleitor\n");
    }
    else{
        if((age > 18) && (age < 65)){
            printf("Eleitor obrigatório\n");
        }
        else{
            printf("Eleitor facultativo\n");
        }
    }
    return(0);
}