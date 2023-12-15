#include <stdio.h>
int main()
{
    int vetorA[10];
    int i;
    for (i=0;i<15;i++){
        printf("\nDigite o %d elemento: ", i);
        scanf("%d", &vetorA[i]);
    }
    printf ("Vetor preenchido.\n");
    for (i=0;i<15;i++){
        printf("%d - ", vetorA[i]);
    }
    return (0);
}