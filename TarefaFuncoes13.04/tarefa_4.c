#include <stdio.h>
void soma()
{
    int resultado, a, b;
    printf("informe um numero:\n");
    scanf("%d", &a);
    printf("inform um numero:\n");
    scanf("%d", &b);

    resultado = a + b;
    printf("o resultado eh %d\n", resultado);
}
void subtracao()
{
    int resultado, a, b;
    printf("informe um numero:\n");
    scanf("%d", &a);
    printf("inform um numero:\n");
    scanf("%d", &b);

    resultado = a - b;
    printf("o resultado eh %d\n", resultado);
}
void multiplicacao()
{
    int resultado, a, b;
    printf("informe um numero:\n");
    scanf("%d", &a);
    printf("inform um numero:\n");
    scanf("%d", &b);

    resultado = a * b;
    printf("o resultado eh %d\n", resultado);
}
void divisao()
{
    int resultado, a, b;
    printf("informe um numero:\n");
    scanf("%d", &a);
    printf("inform um numero:\n");
    scanf("%d", &b);

    resultado = a / b;
    printf("o resultado eh %d\n", resultado);
}

int main ()
{
    int op, i;

    for (i=0; op!=0; i++)
    {
        printf("1_Adicao\n2_Subtracao\n3_Multiplicacao\n4_Divisao\n0_Sair\n");

        printf("informe uma operacao:\n");
        scanf("%d", &op);

        switch(op)
        {
        case 1:
        {
            printf("SOMA\n");
            soma();
            break;
        }
        case 2:
        {
            printf("SUBTRACAO\n");
            subtracao();
            break;
        }
        case 3:
        {
            printf("MULTIPLICACAO\n");
            multiplicacao();
            break;
        }
        case 4:
        {
            printf("DIVISAO\n");
            divisao();
            break;
        }
        case 0:
        {
            exit(0);
        }
        }
    }
}
