#include <stdio.h>
#include <stdlib.h>

int main()
{
    float La,Ls,Lr;

    printf("Informe a quantidade de litros de refresco desejada:\n");
    scanf("%f", &Lr);

    La=Lr*0.8;
    Ls=Lr*0.2;

    printf("A quantidade de agua necessaria e de: %.3f L\nA quantidade de suco necessaria e de: %.3f L", La,Ls);

    return 0;
}
