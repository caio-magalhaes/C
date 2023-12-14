/* Vamos elaborar um programa que leia nome, idade e altura de uma pessoa e exiba
nome, idade, altura e ano de nascimento dela. Para facilitar o entendimento do
o problema, o estruturaremos em três partes: entrada, processamento e saída.
Na entrada de dados, temos que obter os dados de nome, idade e altura. Cada
um deles precisa ser armazenado em uma variável e, em sua leitura, utilizaremos a
função scanf. Como processamento, temos que calcular o ano em que a pessoa
nasceu, que será dado pelo ano atual menos a idade da pessoa. E, como saída,
devemos enviar para a tela nome, idade, altura e ano de nascimento. Para mostrar
estas informações no vídeo, utilizaremos a função printf. */
#include <stdio.h>
int main(){
    char name[30];
    int age, birthYear;
    float height;

    /* Entrada */
    printf("Escreva o seu nome, idade e altura\n");
    scanf("%s %d  %f", name, &age, &height);

    /* Processamento */
    birthYear = 2023 - age;

    /* Saida */
    printf("O nome é %s\n", name);
    printf("A idade é %d\n", age);
    printf("O ano de nascimento é %d\n", birthYear);
    printf("A altura é %.2f\n", height);

    return(0);
}