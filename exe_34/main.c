#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado, area;

    printf("Informe o lado do quadrado: \n");
    scanf("%f", &lado);

    area=lado*lado;

    printf("A area do quadrado e: %.2f metros quadrados \n", area);

    return 0;
}
