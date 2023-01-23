#include<stdio.h>
int main(void)
{
    int num[10], i, aux;

    for(i=0; i<10; i++)
    {
        printf("informe um numero:\n");
        scanf("%d", &num[i]);
    }
    for(i=0; i<10; i++)
    {
        printf("%d ", num[i]);
    }
    aux = num[0];
    printf("\n");
    for(i=0; i<10; i++)
    {
        num[i]=num[i+1];
    }
    for(i=0; i<10; i++)
    {
        printf("%d ", num[i]);
    }
}

