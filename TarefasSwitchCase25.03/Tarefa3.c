#include <stdio.h>
    int main(void){

    int COD, QUANT;
    float VT;

    printf("PRODUTO                PRECO  CODIGO \n");
    printf("Cachorro quente        R$1,20  100  \n");
    printf("Bauru simples          R$1,30  101  \n");
    printf("Bauru com ovo          R$1,50  102  \n");
    printf("hamburguer             R$1,20  103  \n");
    printf("Cheeseburguer          R$1,30  104  \n");
    printf("Refrigerante           R$1,00  105  \n");

    printf("informe o codigo do produto que voce quer: \n");
    scanf("%d", &COD);

    printf("informe quantos voce deseja comprar: \n");
    scanf("%d", &QUANT);

    switch (COD){
        case 100 :{
            VT = 1.20 * QUANT;
            printf("1.20 * %d = %.2f", QUANT, VT);
            break;
            }
        case 101 :{
            VT = 1.30 * QUANT;
            printf("1.30 * %d = %.2f", QUANT, VT);
            break;
            }
        case 102 :{
            VT = 1.50 * QUANT;
            printf("1.50 * %d = %.2f", QUANT, VT);
            break;
            }
        case 103 :{
            VT = 1.20 * QUANT;
            printf("1.20 * %d = %.2f", QUANT, VT);
            break;
            }
        case 104 :{
            VT = 1.30 * QUANT;
            printf("1.30 * %d = %.2f", QUANT, VT);
            break;
            }
        case 105 :{
            VT = 1 * QUANT;
            printf("1 * %d = %.2f", QUANT, VT);
            break;
            }
        default:{
            printf("erro!");
        }
    }
}

