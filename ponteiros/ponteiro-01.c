#include <stdio.h>
// 🧩 ETAPA 1 - O que é um ponteiro?
// &x → é o endereço de memória da variável x
// o * indica que p é um ponteiro para int
//p vai guardar o endereço de uma variável do tipo int

int main() {
    int x = 20;
    int *p = &x;  // ponteiro p recebe o endereço de x

    printf("Valor de x: %d\n", x);        // 10
    printf("Endereco de x: %p\n", &x);    // algo como 0x7ffe...
    printf("Valor de p (endereco de x): %p\n", p); // mesmo valor do &x
    printf("Valor apontado por p: %d\n", *p);      // 10     - É a desreferenciação

    return 0;
}


