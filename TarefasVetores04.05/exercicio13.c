#include<stdio.h>
int main (void)
{
    int a[10];
    int b[10];
    int c[10];
    int i;

    printf("digite 10 valores\n");

    for(i=0; i<10; i++)
    {
        printf("informe um numero:\n");
        scanf("%d", &a[i]);
    }

    printf("agora digite mais 10 valores\n");

    for(i=0; i<10; i++)
    {
        printf("informe um numero:\n");
        scanf("%d", &b[i]);
    }
    for(i=0; i<10; i++)
    {
        if(a[i] == b[i])
        {
            c[i] = 1;
        }
        else
        {
            c[i] = 0;
        }
    }
    for(i=0; i<10; i++)
    {
        printf("%d ", c[i]);
    }
}
