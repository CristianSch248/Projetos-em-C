#include<stdio.h>
int main (void)
{
    int N, N2, total, OP;

    printf("OPERACAO       OPCAO\n");
    printf("SOMA           1  \n");
    printf("SUBTRACAO      2  \n");
    printf("MULTIPLICACAO  3  \n");
    printf("DIVISAO        4  \n");

    printf("informe qual operacao deseja efetuar: \n");
    scanf("%d", &OP);

    switch(OP)
    {
    case 1:
    {
        printf("SOMA\n");
        printf("informe um numero: \n");
        scanf("%d", &N);

        printf("informe outro numero: \n");
        scanf("%d", &N2);

        total = N + N2;
        printf("a SOMA dos numeros eh: %d\n ", total);
        break;
    }
    case 2:
    {
        printf("SUBTRACAO\n");
        printf("informe um numero: \n");
        scanf("%d", &N);

        printf("informe outro numero: \n");
        scanf("%d", &N2);

        total = N - N2;
        printf("a SUBTRACAO dos numeros eh:%d\n ", total);
        break;
    }
    case 3:
    {
        printf("MULTIPLICACAO\n");
        printf("informe um numero: \n");
        scanf("%d", &N);

        printf("informe outro numero: \n");
        scanf("%d", &N2);

        total = N * N2;
        printf("a MULTIPLICACAO dos numeros eh:%d\n", total);
        break;
    }
    case 4:
    {
        printf("DIVISAO\n");
        printf("informe um numero: \n");
        scanf("%d", &N);

        printf("informe outro numero: \n");
        scanf("%d", &N2);

        total = N / N2;
        printf("a DIVISAO dos numeros eh:%d\n", total);
        break;
    }
    default:
    {
        printf("valor invalido");
    }
    }
}
