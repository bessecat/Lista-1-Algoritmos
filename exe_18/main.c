#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horas,horase,salb,sall;

    printf("Informe a quantidade de horas normais: \n");
    scanf("%f", &horas);
    printf("Informe a quantidade de horas extras: \n");
    scanf("%f", &horase);

    salb = ((horas*10)+(horase*15));
    sall = (salb*0.9);

    printf("O salario bruto e: R$ %.2f \n", salb);
    printf("O salario liquido e: R$ %.2f \n", sall);

    return 0;
}
