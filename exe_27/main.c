#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2;

    printf("Digite um numero:\n");
    scanf("%f", &n1);
    printf("Digite um numero diferente de 0:\n");
    scanf("%f", &n2);

    printf("Resposta: %.2f", n1/n2);

    return 0;
}
