#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,m,g;

    printf("Digite a quantidade de camisetas P: \n");
    scanf("%d", &p);
    printf("\nDigite a quantidade de camisetas M: \n");
    scanf("%d", &m);
    printf("\nDigite a quantidade de camisetas G: \n");
    scanf("%d", &g);

    int total=(p*10)+(m*12)+(g*15);

    printf("\nForam vendidas %d camisetas P na venda atual. \n", p);
    printf("\nForam vendidas %d camisetas M na venda atual. \n", m);
    printf("\nForam vendidas %d camisetas G na venda atual. \n", g);
    printf("\nO valor da venda atual e de: R$%d,00", total);


    return 0;
}
