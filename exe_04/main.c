#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int idade;

    printf("Digite seu primeiro nome: \n");
    scanf("%s", nome); //nao se coloca '&' para ler string
    printf("\nDigite sua idade: \n");
    scanf("%d", &idade);

    printf("\n%s, voce ja viveu %d dias.", nome,idade*365);


    return 0;
}
