#include<stdio.h>

int main (void)
{
    int valor1, valor2, aux;

    printf("informe o valor1: ");
    scanf("%d", &valor1);

    printf("informe o valor2: ");
    scanf("%d", &valor2);

    if(valor1 > valor2)
    {
        aux = valor1;
        valor1 = valor2;
        valor2 = aux;
        printf("%d, %d", valor1, valor2);
    }

    else if (valor1 < valor2 )
    {
        aux = valor2;
        valor2 = valor1;
        valor2 = aux;
        printf("%d, %d", valor1, valor2);
    }

}
