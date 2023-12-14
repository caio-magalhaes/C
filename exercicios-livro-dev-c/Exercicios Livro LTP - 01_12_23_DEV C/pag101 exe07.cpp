#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");  // Configuração para usar a localidade do sistema, incluindo acentuação

    int numeroPedido;
    float precoUnitario, totalCompra = 0;
    int quantidade;

    printf("Informe os pedidos (digite 0 como número do pedido para encerrar):\n");

    do {
        // Solicita ao usuário que insira os detalhes do pedido
        printf("Número do Pedido: ");
        scanf("%d", &numeroPedido);

        if (numeroPedido != 0) {
            printf("Preço Unitário: ");
            scanf("%f", &precoUnitario);

            printf("Quantidade: ");
            scanf("%d", &quantidade);

            // Calcula o preço total do pedido e acumula no total da compra
            float precoTotalPedido = precoUnitario * quantidade;
            totalCompra += precoTotalPedido;
        }

    } while (numeroPedido != 0);

    // Apresenta o total da compra
    printf("Total da Compra: R$%.2f\n", totalCompra);

    return 0;
}

