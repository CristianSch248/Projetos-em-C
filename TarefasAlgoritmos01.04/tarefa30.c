#include<stdio.h>
int main (void)
{
    int soma, i=0;

    while(i < 100)
    {
        soma = soma + i;
        i = i + 2;
    }
    printf("a soma dos primeiros 50 numeros pares eh %d", soma);
}
