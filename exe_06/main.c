#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;

    printf("Digite, em kg, o peso da refeicao: \n");
    scanf("%f", &peso);

    printf("\nO valor a pagar e: R$%.2f \n", peso*12);

    return 0;
}
