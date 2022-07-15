#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l,c;

    printf("Digite a largura do terreno: \n");
    scanf("%f", &l);
    printf("Digite o comprimento do terreno: \n");
    scanf("%f", &c);

    printf("\n A area do terreno e: %.2f \n", l*c);

    return 0;
}
