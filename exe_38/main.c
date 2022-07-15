#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float anon,ano,mes,dia,semana;

    printf("Digite o ano que voce nasceu:\n");
    scanf("%f",&anon);

    ano = 2022 - anon;
    mes = 24264 - (anon*12);
    dia = 736008 - (anon*364);
    semana = 105144 - (anon*52);

    printf("Voce tem %.0f anos de idade\n", ano);
    printf("Voce tem %.0f meses de idade\n", mes);
    printf("Voce tem %.0f dias de idade\n", dia);
    printf("Voce tem %.0f semanas de idade\n", semana);

    return 0;
}
