#include<stdio.h>
int main (void)
{
    int i=0, OP;
    float R, N1, N2;

while(i<1)
    {
    printf("OPERACAO     OPCAO\n");
    printf("SOMA          1\n");
    printf("SUBTRACAO     2\n");
    printf("MULTIPLICACAO 3\n");
    printf("DIVISAO       4\n");
    printf("SAIR          5\n");


    printf("qual opercao deseja?\n");
    scanf("%d", &OP);


        switch(OP)
        {
        case 1:
        {
            printf("SOMA\n");
            printf("informe numero:\n");
            scanf("%f", &N1);

            printf("informe numero:\n");
            scanf("%f", &N2);

            R=N1+N2;
            printf("o resultado da soma eh %.2f\n", R);
            break;
        }
        case 2:
        {
            printf("SUBTRACAO\n");
            printf("informe numero:\n");
            scanf("%f", &N1);

            printf("informe numero:\n");
            scanf("%f", &N2);

            R=N1-N2;
            printf("o resultado da subtracao eh %.2f\n", R);
            break;
        }
        case 3:
        {
            printf("MULTIPLICACAO\n");
            printf("informe numero:\n");
            scanf("%f", &N1);

            printf("informe numero:\n");
            scanf("%f", &N2);

            R=N1*N2;
            printf("o resultado da multiplicacao eh %.2f\n", R);
            break;
        }
        case 4:
        {
            printf("DIVISAO\n");
            printf("informe numero:\n");
            scanf("%f", &N1);

            printf("informe numero:\n");
            scanf("%f", &N2);

            R=N1/N2;
            printf("o resultado da divisao eh %.2f\n", R);
            break;
        }
        case 5:
        {
            i=i+1;
        }
        }
    }
}
