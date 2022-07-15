#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float raio, area;

    printf("Informe o raio da pizza: \n");
    scanf("%f", &raio);

    area = (3.14*(pow((raio),2)));

    printf("A area da pizza e: %.2f", area);

    return 0;
}
