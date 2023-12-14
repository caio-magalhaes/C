/* 
Faça um programa que leia números inteiros até que seja 
informado o valor 0.
Apresente a média dos valores, o maior e o menor valor e a 
quantidade de números
pares e ímpares.
 */
#include <stdio.h>
int main(){
    int sum, num, count, mean, highestNumber, lowestNumber,evenCount, oddCount;
    printf("Digite um número inteiro: \n");
    scanf("%d", &num);
    highestNumber = num;
    lowestNumber = num;

    do
    {
        if(num > highestNumber) highestNumber = num;
        if( num < lowestNumber) lowestNumber = num;
        if( num % 2 == 0)evenCount += 1;
        else oddCount += 1;
        sum += num;
        count += 1;
    } while (num != 0);
    
    mean = sum / count;
    printf("A média dos valores é: %d\nO maior valor é: %d\nO menor valor é: %d\nA quantidade de números é: %d\n", mean, highestNumber, lowestNumber, count); 
    printf("A quantidade de números pares é: %d\nA quantidade de números ímpares é: %d",evenCount, oddCount);

    return 0;
}