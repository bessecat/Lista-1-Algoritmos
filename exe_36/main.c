#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salm, salf, quant;

    printf("Informe o valor do salario minimo: \n");
    scanf("%f", &salm);
    printf("Informe o valor do seu salario \n");
    scanf("%f", &salf);

    quant=salf/salm;

    printf("Voce recebe %.2f salarios minimos.\n", quant);

    return 0;
}
