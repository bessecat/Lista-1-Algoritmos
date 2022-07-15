#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia,mes,tmes;

    printf("Digite o mes atual: \n");
    scanf("%d", &mes);
    printf("\nDigite o dia do mes: \n");
    scanf("%d", &dia);

    tmes=(mes-1)*30;

    printf("\nJa se passaram %d dias desde o inicio do ano.", tmes+dia);

    return 0;
}
