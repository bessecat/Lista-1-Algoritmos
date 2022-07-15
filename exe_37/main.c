#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,resp;
    printf("Digite um numero:\n");
    scanf("%d", &num);

    for (int i=1; i<=10 ;i++){
        resp=num*i;
        printf("\n %d x %d = %d",num,i,resp);
    }

    return 0;
}
