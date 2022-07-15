#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, aumento, sfinal;

    printf("Digite seu salário: \n");
    scanf("%f", &salario);

    aumento = (salario*0.15)+salario;
    sfinal= aumento-(aumento*0.08);

    printf("O salario inicial e de: R$ %.2f\n", salario);
    printf("O salario com aumento e: R$ %.2f\n", aumento);
    printf("O salario final e: R$ %.2f\n", sfinal);

    return 0;
}
