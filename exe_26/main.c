#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3;

    printf("Informe o primeiro numero:\n");
    scanf("%f", &n1);
    printf("Informe o segundo numero:\n");
    scanf("%f", &n2);
    printf("Informe o terceiro numero:\n");
    scanf("%f", &n3);

    printf("Resultado: %.2f", n1*n2*n3);

    return 0;
}
