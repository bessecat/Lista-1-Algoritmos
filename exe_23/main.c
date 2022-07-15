#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alth,altp,somh,somp,calc1;

    printf("Digite sua altura em metros:\n");
    scanf("%f",&alth);
    printf("Digite o comprimento da sua sombra em metros:\n");
    scanf("%f", &somh);
    printf("Digite o comprimento da sombra do predio em metros:\n");
    scanf("%f", &somp);

    calc1=alth*somp;
    altp=calc1/somh;

    printf("A altura do predio e: %.2f M", altp);

    return 0;
}
