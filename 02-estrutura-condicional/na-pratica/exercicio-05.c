/* 
Faça um programa que receba o código do 
estado de origem da carga de um cami-
nhão, o peso da carga em toneladas e o 
código dela.
Calcule e apresente: o peso da carga em quilos, o preço da carga, o valor do imposto
e o valor total da carga (preço da carga mais imposto).
 */
/* 
CódigoCargo
120
215
310
45
Código da cargaPreço por quilo
10 a 20180
21 a 30120
31 a 40230
 */
/* FALTA INFORMAÇÃO DO IMPOSTO NO ENUNCIADO */

#include <stdio.h>
int main(){
    int codigoEstado, codigoCarga;
    float pesoToneladas, pesoKilos, preçoCarga;
    printf("Dígite o código do estádo, o código da carga e o peso");
    scanf("%d %d %f", &codigoEstado, &codigoCarga, &pesoToneladas);
    pesoKilos = pesoToneladas * 1000;

    return 0;
}