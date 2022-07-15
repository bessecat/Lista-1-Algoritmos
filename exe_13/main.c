#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,cent,dez,uni,sobra;

    printf("Digite um numero inteiro de ate 3 digitos: \n");
    scanf("%d", &num);

    cent= (num/100);
    sobra= (num-(cent*100));
    dez= (sobra/10);
    uni= (sobra-(dez*10));

    printf("CENTENA: %d \n", cent);
    printf("DEZENA: %d \n", dez);
    printf("UNIDADE: %d \n", uni);


    return 0;
}
