/* Escreva um programa que, dado o raio de 
um círculo, calcule sua área e o perímetro. 
A
área é a superfície do objeto, dada por A 
 πt2, e o perímetro é a medida do contorno
do objeto dado por P  2πr2. Dica: utilize 
as funções intrínsecas vistas nesta 
unidade. */
#include <stdio.h>
#include <math.h>
int main(){
    int radius;
    float area, perimeter;
    const float pi = 3.14;
    printf("type in the radius of the circle: \n");
    scanf("%d", &radius);
    /* processamento */
    area = pi * pow(radius, 2);
    perimeter = 2 * pi * radius;
    printf("A área e o perimétro são respectivamente: %.2f, %.2f", area, perimeter);
    return(0);
}