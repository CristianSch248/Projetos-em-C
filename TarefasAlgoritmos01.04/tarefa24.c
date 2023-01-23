#include<stdio.h>
int main (void)
{
    int ANO, B;

    printf("informe um ano qualquer para saber se ele é bissexto\n");
    printf("ano: \n");
    scanf("%d", &ANO);

    B = ANO/4;
    B = B *4;

    if(B==ANO)
    {
        printf("o ano informado eh BISSEXTO");
    }
    else
    {
        printf("o ano informado NAO eh BISSEXTO");
    }
}
