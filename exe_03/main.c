#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,b,x,y,z;

    printf("Digite a quantidade de paes: \n");
    scanf("%f", &p);
    printf("Digite a quantidade de broas: \n");
    scanf("%f", &b);

    x=p*0.12;
    y=b*1.50;
    z=x+y;

    printf("O lucro do dia foi de: %.2f \n", z);
    printf("O valor para guardar na poupanca e de: %.2f \n", z*0.1);

    // dados de vari�veis (calculos x,y, e z) devem ser adicionados depois da leitura das vari�veis envolvidas

    return 0;
}
