#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco;

    printf("Informe o preco do produto: \n");
    scanf("%f", &preco);

    printf("O novo preco e: R$ %.2f", preco*0.9);

    return 0;
}
