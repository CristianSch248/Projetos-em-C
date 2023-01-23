#include<stdio.h>
int main(void)
{
    int N1, N2, OP;
    float R;

    printf("OPCAO     FUMCAO\n");
    printf("1         soma dois valores\n");
    printf("2         diferenca do maior pelo menor\n");
    printf("3         produto entre os numeros informados\n");
    printf("4         divisao entre os numeros informados\n");

    printf("\ninfome qual operacao deseja realizar:\n");
    scanf("%d", &OP);

    switch(OP)
    {
    case 1:
    {
        printf("informe numero:\n");
        scanf("%d", &N1);

        printf("informe numero:\n");
        scanf("%d", &N2);

        R=N1+N2;
        printf("a soma dos numeros é %.2f\n", R);
    }
    case 2:
    {
        printf("informe numero:\n");
        scanf("%d", &N1);

        printf("informe numero:\n");
        scanf("%d", &N2);

        if(N1>N2)
        {
            R=N1-N2;
            printf("a diferenca do maior pelo menor eh de %.2f\n", R);
        }
        else
        {
            R=N2-N1;
            printf("a diferenca do maior pelo menor eh de %.2f\n", R);
        }
    }
    case 3:
    {
        printf("informe numero:\n");
        scanf("%d", &N1);

        printf("informe numero:\n");
        scanf("%d", &N2);

        R=N1*N2;
        printf("o produto eh %.2f", R);
    }
    case 4:
    {
        printf("informe numero:\n");
        scanf("%d", &N1);

        printf("informe numero:\n");
        scanf("%d", &N2);

        R=N1/N2;
        printf("o resultado da divisao eh de %.2f", R);
    }
    }
}
