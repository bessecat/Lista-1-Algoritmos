#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;

    printf("Informe seu peso em Kg:\n");
    scanf("%f", &peso);

    printf("Seu peso em gramas e: %.0f g", peso*1000);

    return 0;
}
