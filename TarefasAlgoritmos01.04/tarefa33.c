#include<stdio.h>
int main (void)
{
    int N, MARC = 0, i=0, B, X;

    printf("digite 1000 para encerrar!\n");

    printf("informe um numero:\n");
    scanf("%d", &N);

    if(N == 1000)
    {
        system("pause");
    }
    else
    {
        for (i=0; i<N; i++)
        {
            printf("informe outro numero:\n");
            scanf("%d", &X);

            B = X/2;
            B = B*2;

            if(B == X)
            {
                MARC++;
            }
        }
        printf("a quantidade de numeros pares eh %d\n", MARC);
        printf("a quantidade de numeros lidos foram %d", i);
    }
}
