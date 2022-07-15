#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bmaior,bmenor,h,a;

    printf("Informe a medida da base maior:\n");
    scanf("%f", &bmaior);
    printf("Informe a medida da base menor:\n");
    scanf("%f", &bmenor);
    printf("Informe a medida da base altura:\n");
    scanf("%f", &h);

    a = ((bmaior+bmenor)*h)/2;

    printf("A area e: %.2f metros quadrados", a);

    return 0;
}
