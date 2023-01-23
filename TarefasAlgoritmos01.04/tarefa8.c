#include<stdio.h>
int main (void){
 int N, M, C, D, U;

printf("informe um numero: \n");
scanf("%d", &N);

if(N > 999 && N < 10000)
{
    M = N / 1000;
    C = (N / 100)%10;
    D = (N / 10)%10;
    U = N %10;

    printf("milhar: %d\n", M);
    printf("centena: %d\n", C);
    printf("dezena: %d\n", D);
    printf("unidade: %d\n", U);
}
}
