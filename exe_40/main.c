#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float c1,c2;
    double h1,h2;

    printf("Informe o valor do primeiro cateto:\n");
    scanf("%f",&c1);
    printf("Informe o valor do segundo cateto:\n");
    scanf("%f",&c2);

    h1=(pow(c1,2))+(pow(c2,2));
    h2=sqrt(h1);

    printf("O valor da hipotenusa e: %.2fl",h2);

    return 0;
}
