#include<stdio.h>
int main (void)
{
    int i=1, n=0, cont=0;

    printf("informe um numero:\n");
    scanf("%d", &n);

    while(i <= n)
    {
        if(n%i == 0)
        {
            cont++;
        }
        i++;
    }
    if (cont == 2)
    {
        printf("e primo");
    }
    else
    {
        printf("nao e primo");
    }
}
