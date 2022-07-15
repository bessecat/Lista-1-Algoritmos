#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,media;

    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);

    media=((n1*2)+(n2*3))/5;

    printf("A media final e: %.2f", media);

    return 0;
}
