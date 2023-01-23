#include<stdio.h>

void verifica()
{
    int N;

    printf("informe um numero:\n");
    scanf("%d", &N);

    if (N>0){
        printf("positivo\n");
        }
    else {
        printf("negativo\n");
    }
}
main()
{
verifica();
}

