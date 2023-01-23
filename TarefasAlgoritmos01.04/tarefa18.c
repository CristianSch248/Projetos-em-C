#include<stdio.h>
int main (void)
{

    int soma, N, M, C, D, U;

    printf("informe um numero de 10 ate 9999: \n");
    scanf("%d", &N);

    if(N > 9 && N < 100)
    {
        D = N / 10;
        U = N %10;
        soma =D + U;

        printf("a soma dos numeros eh:\n%d", soma);
    }
    else if(N > 99 && N < 1000)
    {
        C = N /100;
        D = (N / 10)%10;
        U = N %10;
        soma = C + D + U;

        printf("a soma dos numeros eh:\n%d", soma);
    }
    else if(N > 999 && N < 10000)
    {
        M = N / 1000;
        C = (N /100)%10;
        D = (N / 10)%10;
        U = N %10;
        soma = M + C + D + U;

        printf("a soma dos numeros eh:\n%d", soma);
    }
    else
    {
        printf("numero invalido");
    }
}
