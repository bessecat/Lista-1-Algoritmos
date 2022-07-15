#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dmaior, dmenor, area;

    printf("Informe a diagonal menor do losango: \n");
    scanf("%f", &dmenor);
    printf("Informe a diagonal maior do losango: \n");
    scanf("%f", &dmaior);

    area=(dmaior*dmenor)/2;

    printf("A area do losango e: %.2f metros quadrados \n", area);

    return 0;
}
