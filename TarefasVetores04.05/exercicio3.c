#include<stdio.h>
int main(void)
{
    int N[15];
    int i;

    for(i=0; i<15; i++)
    {
        printf("informe um numero:\n");
        scanf("%d", &N[i]);
    }
    for(i=0; i<15; i++)
    {
        if(N[i]>5)
        {
            printf("%d ", N[i]);
        }
    }
}
