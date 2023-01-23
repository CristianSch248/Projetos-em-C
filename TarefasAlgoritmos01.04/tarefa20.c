#include<stdio.h>
int main (void)
{
    int N;
    printf("informe um numero de 1 a 7:\n");
    scanf("%d", &N);

    if (N > 0 && N < 8)
    {
        switch(N)
        {
        case 1:
        {
            printf("Domingo");
            break;
        }
        case 2:
        {
            printf("Segunda-feira");
            break;
        }
        case 3:
        {
            printf("Terca-feira");
            break;
        }
        case 4:
        {
            printf("Quarta-feira");
            break;
        }
        case 5:
        {
            printf("Quinta-feira");
            break;
        }
        case 6:
        {
            printf("sexta-feira");
            break;
        }
        case 7:
        {
            printf("Sabado");
            break;
        }
        }
    }
    else
    {
        printf("numero invalido");
    }
}
