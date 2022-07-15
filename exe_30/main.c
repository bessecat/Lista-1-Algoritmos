#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal,vendas,com,salf;

    printf("Informe seu salario:\n");
    scanf("%f", &sal);
    printf("Informe o valor total das vendas:\n");
    scanf("%f", &vendas);

    com=vendas*0.04;
    salf=sal+com;

    printf("O valor da comissao e: R$ %.2f\n", com);
    printf("O valor do salario final e: R$ %.2f\n", salf);

    return 0;
}
