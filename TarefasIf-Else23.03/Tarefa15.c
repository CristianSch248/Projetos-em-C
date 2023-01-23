#include <stdio.h>

int main (void)
{

    int COD, QUANT;
    float VT;

    printf("PRODUTO                PRECO  CODIGO \n");
    printf("Cafe expresso pequeno  R$2,OO  100  \n");
    printf("Cafe expresso grande   R$3,00  101  \n");
    printf("Cafe com leite pequeno R$2,50  102  \n");
    printf("Cafe com leite grande  R$3,50  103  \n");
    printf("Agua sem gas           R$1,50  104  \n");
    printf("agua com gas           R$2,40  105  \n");

    printf("informe o codigo do produto que voce quer: \n");
    scanf("%d", &COD);

    printf("informe quantos voce deseja comprar: \n");
    scanf("%d", &QUANT);

    if(COD == 100)
    {
        VT = 2 * QUANT;
        printf("O valor total e: %.2f", VT);
    }else if(COD == 101)
    {
        VT = 3 * QUANT;
        printf("O valor total e: %.2f", VT);
    }else if(COD == 102)
    {
        VT = 2.50 * QUANT;
        printf("O valor total e: %.2f", VT);
    }else if(COD == 103)
    {
        VT = 3.50 * QUANT;
        printf("O valor total e: %.2f", VT);
    }else if(COD == 104)
    {
        VT = 1.50 * QUANT;
        printf("O valor total e: %.2f", VT);
    }else if(COD == 105)
    {
        VT = 2.40 * QUANT;
        printf("O valor total e: %.2f", VT);
    }
}
