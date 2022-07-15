#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float raio,h,area,vol;

    printf("Informe a altura da caixa dagua:\n");
    scanf("%f", &h);
    printf("Informe o raio da caixa dagua:\n");
    scanf("%f", &raio);

    area=3.14*(pow(raio,2));
    vol=area*h;

    printf("O volume da caixa dagua e de: %.2f m", vol);

    return 0;
}
