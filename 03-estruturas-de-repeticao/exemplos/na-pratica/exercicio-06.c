/* 
Nada melhor do que uma máquina para realizar tarefas repetitivas, evitando esforço
humano desnecessário. Assim sendo, elabore um programa que leia uma frase e o
número de vezes que deseja imprimi-la.
 */
#include <stdio.h>
int main(){
    int count = 0;
    char phrase[30] = "a";
    printf("Digite uma frase e o número de vezes que deseja imprimi-la:\n");
    scanf("%s %d", phrase, &count);
    while (count != 0)
    {
        printf("%s", phrase);
        count -= 1;
    }
    
    return 0;
}