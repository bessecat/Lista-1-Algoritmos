#include <stdio.h>
#include <stdlib.h>

int main()
{
    float litro,reais;

    printf("Digite o preco atual do litro da gasolina: \n");
    scanf("%f", &litro);
    printf("\nDigite o valor em reais que deseja abastecer: \n");
    scanf("%f", &reais);

    printf("Voce pode abastecer ate %.2f litros", reais/litro);

    return 0;
}
