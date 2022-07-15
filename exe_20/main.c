#include <stdio.h>
#include <stdlib.h>

int main()
{
    float blusas,novelo,quant;


    printf("Informe a quantidade de blusas\n");
    scanf("%int", &blusas);
    printf("Informe a quantidade de novelos\n");
    scanf("%int", &novelo);

    quant = (novelo/blusas);

    printf("A quantidade de novelos por blusa e de %.2f", quant);

    return 0;
}
