#include <stdio.h>
#include <stdlib.h>

int main()
{

    int cavalos;

    printf("Digite a quantidade de cavalos comprados: \n");
    scanf("%d", &cavalos);

    printf("\nA quantidade de ferraduras necessarias para equipar todos os cavalos e: %d ferraduras \n", cavalos*4);

    return 0;
}
