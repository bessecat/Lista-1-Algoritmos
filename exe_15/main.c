#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total,resto;
    int conta;

    printf("Informe o valor total da conta: \n");
    scanf("%f", &total);

    conta = (total/3);
    resto = total - (conta*2);

    printf("Carlos e andré pagam: R$ %d,00 \n", conta);
    printf("Felipe paga: R$ %.2f \n", resto);

    return 0;
}
