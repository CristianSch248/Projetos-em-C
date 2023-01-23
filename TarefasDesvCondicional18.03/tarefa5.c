#include<stdio.h>

int main(void)
{

    int valor1, valor2;

    printf("insira o valor1: ");
    scanf("%d", &valor1);

    printf("insira o valor2: ");
    scanf("%d", &valor2);

    if (valor1 %2 == 0)      //teste para saber se o valor1 É PAR
    {
        if (valor2 %2 == 0)      //teste para saber se o valor2 É PAR
        {
            printf("os dois sao PARES");
        }
        else      // se o valor2 NÃO for PAR
        {
            printf("o numero1 e PAR o numero2 e IMPAR");
        }
    }
    else     //se o valor1 NÃO for PAR
    {
        if (valor2 %2 == 0)   // saber se o valor2 É PAR
        {
            printf("numero1 IMPAR numero2 PAR");
        }
        else    // caso o valor2 NÃO seja PAR
        {
            printf("os dois sao IMPARES");
        }
    }
}
