#include <stdio.h>
#include <stdlib.h>

int main()
{
    int frangos;
    float gasto;

    printf("Informe a quantidade de frangos: \n");
    scanf("%d", &frangos);

    gasto = (frangos*11);

    printf("O custo total para marcar os frangos e de: R$ %.2f", gasto);

    return 0;
}
