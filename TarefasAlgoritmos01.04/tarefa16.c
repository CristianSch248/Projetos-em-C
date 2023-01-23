#include<stdio.h>
int main(void)
{

    int N, A, B;

    printf("insira um numero: \n");
    scanf("%d", &N);

    A = N;
    B = A/2;
    B = B*2;


    if (B == N)
    {
        printf("par");
    }
    else
    {
        printf("impar");
    }
}
