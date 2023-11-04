#include <stdio.h>

int main()
{
    int num, ant, suc;
    printf("Digite o número: ");
    scanf("%d", &num);
    ant = num - 1;
    suc = num + 1;
    printf("O antecessor é: %d", ant);
    printf("\nO sucessor é: %d\n", suc);
    return 0;
}
