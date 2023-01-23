#include <stdio.h>
#include <math.h>
int main(void)
{
    int numero;
    float Log;

    printf("informe um numero maior que ZERO:\n");
    scanf("%d", &numero);

    if (numero == 0 || numero < 0 )
    {
        printf("numero invalido!");
    }
    else
    {
       Log =  log10(numero);
    }

    printf("%.2f", Log);
}
