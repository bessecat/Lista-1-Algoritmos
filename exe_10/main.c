#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1,y1,x2,y2,calc,calc2;

    printf("\nDigite a variavel x do ponto A: \n");
    scanf("%lf", &x1);
    printf("\nDigite a variavel y do ponto A: \n");
    scanf("%lf", &y1);
    printf("\nDigite a variavel x do ponto B: \n");
    scanf("%lf", &x2);
    printf("\nDigite a variavel y do ponto B: \n");
    scanf("%lf", &y2);

    calc=(pow((x2-x1),2))+(pow((y2-y1),2));
    calc2=sqrt(calc);

    printf("\nA distancia entre os pontos A e B e de: %.2lf", calc2);


    return 0;
}
