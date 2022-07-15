#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso,a,b;

    printf("Informe seu peso\n");
    scanf("%f", &peso);

    a = (peso+(peso*0.15));
    b = (peso-(peso*0.2));

    printf("Se voce engordar 15 por cento seu peso sera: %.3f Kg\n",a);
    printf("Se voce emagrecer 20 por cento seu peso sera: %.3f Kg\n",b);

    return 0;
}
