#include<stdio.h>
int main (void)
{
    int N, B, i=0;

    printf("informe um numero PAR:\n");
    scanf("%d", &N);

        B = N/2;
        B = B*2;

    if(B==N && B > 0)
    {
        while(i<=N)
        {
            printf("%d \n", i);
            i = i + 2;
        }
    }
    else
    {
        printf("NUMERO INCORRETO");
    }
}
