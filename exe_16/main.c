#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sand;
    float queijo,pres,carne;

    printf("Informe a quantidade de sanduiches a fazer: \n");
    scanf("%d", &sand);

    queijo = (sand*0.1);
    pres = (sand*0.05);
    carne = (sand*0.1);

    printf("A quantidade de queijo necessaria e de: %.2f kg \n", queijo);
    printf("A quantidade de presunto necessaria e de: %.2f kg \n", pres);
    printf("A quantidade de carne necessaria e de: %.2f kg \n", carne);

    return 0;
}
