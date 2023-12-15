/* 
Faça um programa que leia um conjunto de pedidos e calcule o total da compra. O
pedido possui os seguintes campos: número, data (dia, mês e ano), preço unitário
e quantidade. A entrada de pedidos é encerrada quando o usuário informa zero
como número do pedido.
 */
#include <stdio.h>
int main(){
    int number=0, day, month, year, quantity=0;
    float unitPrice=0.00, totalPrice=0.00;

    do
    {
        printf("Digite as informações do pedido: ");
        scanf("%d %d %d %d %d %f", &number, &day, &month, &year, &quantity, &unitPrice );
        totalPrice += (unitPrice * quantity);

    } while (number != 0);
    printf("O total da compra é: %.2f", totalPrice);
    

    return 0;
}