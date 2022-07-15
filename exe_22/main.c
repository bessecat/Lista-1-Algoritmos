#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,n5,n6,total;

    printf("Informe a quantidade de moedas de 1 centavo:\n");
    scanf("%f", &n1);
    printf("Informe a quantidade de moedas de 5 centavos:\n");
    scanf("%f", &n2);
    printf("Informe a quantidade de moedas de 10 centavos:\n");
    scanf("%f", &n3);
    printf("Informe a quantidade de moedas de 25 centavos:\n");
    scanf("%f", &n4);
    printf("Informe a quantidade de moedas de 50 centavos:\n");
    scanf("%f", &n5);
    printf("Informe a quantidade de moedas de 1 real:\n");
    scanf("%f", &n6);

    n1=n1*0.01;
    n2=n2*0.05;
    n3=n3*0.1;
    n4=n4*0.25;
    n5=n5*0.5;
    n6=n6*1;
    total=n1+n2+n3+n4+n5+n6;

    printf("A quantidade de reais poupada e de: R$ %.2f", total);

    return 0;
}
