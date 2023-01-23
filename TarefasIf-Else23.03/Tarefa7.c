#include<stdio.h>

int main(void)
{
    int valor1, valor2;

    printf("informe um valor: \n");
    scanf("%d", &valor1);

    printf("informe um valor: \n");
    scanf("%d", &valor2);

    if (valor1%2 == 0 && valor2%2 == 0)
    {
        printf("OS DOIS SAO PARES");
    }
    else if (valor1%2 == 0 && valor2%2 != 0 )
    {
        printf("o valor1 e PAR o valor 2 e IMPAR");
    }
    else if(valor1%2 != 0 && valor2%2 == 0)

    {
        printf("valor1 IMPAR, valor2 PAR");
    }
    else
    {
        printf("OS DOIS SAO IMPARES");
    }

}
