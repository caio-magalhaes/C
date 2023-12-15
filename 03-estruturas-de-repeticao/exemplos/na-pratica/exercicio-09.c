/* 
Construa um programa que possibilite calcular a área total de uma residência (sala,
cozinha, banheiro, quartos etc.). O programa deve solicitar a entrada do nome, a
largura e o comprimento de determinado cômodo até que o nome do cômodo seja
“FIM”. O programa deve apresentar o valor total acumulado da área residencial.
 */
#include <stdio.h>
int main(){
    char name[30];
    int sum, width, length, totalArea = 0;
    while (name != "FIM")
    {
        printf("Insira as informações do comodo:");
        scanf("%s %d %d", name, &width, &length);
        totalArea += (width * length);
    }
    printf("%d", totalArea);
    return 0;
}