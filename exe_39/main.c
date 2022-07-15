#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,c1,c2,c1b,c2b,salariofinal;

    printf("Informe seu salario:\n");
    scanf("%f",&salario);
    printf("Informe o valor da primeira conta:\n");
    scanf("%f",&c1);
    printf("Informe o valor da segunda conta:\n");
    scanf("%f",&c2);

    c1b=c1+(c1*0.02);
    c2b=c2+(c2*0.02);
    salariofinal=(salario-c1b)-c2b;

    printf("\nO que restou do seu salario e: R$ %.2f",salariofinal);

    return 0;
}
