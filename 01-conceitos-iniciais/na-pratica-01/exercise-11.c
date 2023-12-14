/* 
Escreva um programa que receba quatro 
números inteiros, calcule e apresente a mé-
dia aritmética entre eles. Observação: não 
esqueça de formatar o valor da média no
momento de apresentá-lo, para que sejam 
impressas apenas duas casas decimais. 
*/

#include <stdio.h>
int main(){
    int n1, n2, n3, n4;
    float media;
    printf("Insira quatro números inteiros: \n");
    scanf("%d %d %d %d", &n1,&n2,&n3,&n4);
    media = (float)(n1+n2+n3+n4)/4;
    printf("A média aritmética é : %.2f",media);
    return(0);
}