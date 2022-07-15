#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diast,meses,anos,sobra,dias;

    printf("Digite o numero de dias sem acidentes na fabrica: \n");
    scanf("%d", &dias);

    anos=dias/360;

    printf("\nSem acidentes por %d ano(s), ", anos);

    sobra=dias-(anos*360);
    meses=sobra/30;

    printf("%d mes(es) ", meses);

    dias=sobra-(meses*30);

    printf("e %d dia(s).", dias);

    return 0;
}
