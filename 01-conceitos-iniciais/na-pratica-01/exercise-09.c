/* Escreva um programa que leia o nome de uma pessoa e
imprima a seguinte mensagem,
na tela: “Bem-vindo(a) à disciplina de Algoritmos e Lógica de
Programação II, <nome>”;
onde o campo <nome> deve ser substituído pelo nome informado
pelo usuário. */
#include <stdio.h>
int main()
{
    char name[30];
    printf("Escreva o seu nome: \n");
    scanf("%s",name);
    printf("Bem-vindo(a) à disciplina de Algoritmos e Lógica de Programação II, %s", name);
    return(0);
}