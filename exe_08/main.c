#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,media;

    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);
    printf("\nDigite a segunda nota: \n");
    scanf("%f", &n2);
    printf("\nDigite a terceira nota: \n");
    scanf("%f", &n3);

    media=((n1*1)+(n2*2)+(n3*3))/(1+2+3);

    printf("\nSua nota final e: %.2f", media);
    return 0;
}
