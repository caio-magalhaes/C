#include <stdio.h>
#include <math.h>

int main(){
    int quadrado, num;
    float raiz;

    printf("\nDigite um número inteiro: ");
    scanf("%d", num);

    if (num % 2 == 0)
    {
        raiz = sqrt(num);
        printf("\nO número é par.");
        printf("\nA raiz quadrada é: %.3f",raiz);
    }
    else{
        quadrado = pow(num,2);
        printf("\nO número é impar.");
        printf("\nO número ao  quadrado é: %d", quadrado);
    }
    
    return(0);
}