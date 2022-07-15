#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lata,gar1,gar2,litros;

    printf("Digite o numero de latas compradas\n");
    scanf("%f", &lata);
    printf("Digite o numero de garrafas de 600 ml compradas\n");
    scanf("%f", &gar1);
    printf("Digite o numero de garrafas de 2 L compradas\n");
    scanf("%f", &gar2);

    lata = lata*350;
    gar1 = gar1*600;
    gar2 = gar2*2000;
    litros = (lata+gar1+gar2)/1000;

    printf("O total de litros comprados e: %.3f L", litros);

    return 0;
}
