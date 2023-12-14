#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configura��o para usar a localidade do sistema, incluindo acentua��o

    int numeroPedido;
    float precoUnitario, totalCompra = 0;
    int quantidade;

    printf("Informe os pedidos (digite 0 como n�mero do pedido para encerrar):\n");

    do {
        // Solicita ao usu�rio que insira os detalhes do pedido
        printf("N�mero do Pedido: ");
        scanf("%d", &numeroPedido);

        if (numeroPedido != 0) {
            printf("Pre�o Unit�rio: ");
            scanf("%f", &precoUnitario);

            printf("Quantidade: ");
            scanf("%d", &quantidade);

            // Calcula o pre�o total do pedido e acumula no total da compra
            float precoTotalPedido = precoUnitario * quantidade;
            totalCompra += precoTotalPedido;
        }

    } while (numeroPedido != 0);

    // Apresenta o total da compra
    printf("Total da Compra: R$%.2f\n", totalCompra);

    return 0;
}

