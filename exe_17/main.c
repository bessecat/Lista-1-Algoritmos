#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,f;

    printf("Informe a temperatura em Celcius: \n");
    scanf("%f", &c);

    f = ((c*1.8)+32);

    printf("A temperatura em Fahrenheit e: %.2f", f);

    return 0;
}
