#include<stdio.h>

void soma(int a, int b)
{
    int resultado;
    resultado = a + b;
    printf("o resultado da soma eh %d", resultado);
}

main()
{
    int a, b;
    printf("informe um numero:\n");
    scanf("%d", &a);
    printf("informe um numero:\n");
    scanf("%d", &b);
    soma(a,b);
}
