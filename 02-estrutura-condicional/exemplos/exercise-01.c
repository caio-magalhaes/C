#include <stdio.h>
#include <math.h>

int main(){
    int num;
    float raiz;

    printf("\nDigite um número inteiro:");
    scanf("%d", &num);
    if (num % 2 == 0){
        raiz = sqrt(num);
        printf("\nA raiz quadrada é: %.3f", raiz);
    }
    return(0);
}