//🧩 ETAPA 2 – Modificando valores através de ponteiros
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;  // p aponta para x / guarda o endereço de x

    printf("Antes: x = %d\n", x);

    *p = 20;      // altera o valor de x através do ponteiro / o * significa "acessar o valor na memória apontada por p", então esse comando muda o valor de x para 20

    printf("Depois: x = %d\n", x);
//------------------------------------------------------------------------

//❌ Não é verdade que só se pode alterar uma variável via ponteiros!
 int b = 10;
 b = 20;
 printf("b = %d\n", b);  // b = 20

// ✅ Então, para que servem os ponteiros para alterar valores?
// ✅ Para alterar valores de variáveis em funções, como no exemplo abaixo:
//porque funções recebem cópias dos valores por padrão (passagem por valor).
// 💡 O que acontece se não usar ponteiro?
void mudaValor(int a) {
    a = 30; // altera só a cópia local
}

    mudaValor(b);
    printf("b = %d\n", b);  // Ainda será 20 porque 'a' não mudou
//------------------------------------------------------------------------
//Agora usando ponteiros:
void mudaValorComPonteiro(int *x) {
    *x = 50;  // altera o valor original apontado por x
}

    mudaValorComPonteiro(&b);
    printf("%d\n", b);  // agora imprime 50, porque alterou a variável original

/* 
⚠️ Resumo rápido:
Como alterar a variável	          Quando usar
a = 20;                   	Quando você está no mesmo escopo da variável e quer mudar direto
Usar ponteiro (*p = 20)  	Quando quer alterar a variável de fora do escopo atual,           por                         exemplo, dentro de uma função
*/

    return 0;
}



