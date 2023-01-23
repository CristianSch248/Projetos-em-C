#include <stdio.h>

int main (void){

    int P;
    float SL, NS;

    printf("PLANO  PORCENTAGEM \n");
    printf("1      10 \n");
    printf("2      15 \n");
    printf("3      20 \n");

    printf("insira o salario atual do empregado: \n");
    scanf("%f", &SL);

    printf("qual plano de aumento deseja: \n");
    scanf("%d", &P);

    fgetc(stdin);

    switch(P){
        case 1:{
            NS = SL * 0.10;
            printf("%.2f * 0.10 = %.2f", SL, NS);
            break;
            }
        case 2:{
            NS = SL * 0.15;
            printf("%.2f * 0.15 = %.2f", SL, NS);
            break;
            }
        case 3:{
            NS = SL * 0.20;
            printf("%.2f * 0.20 = %.2f", SL, NS);
            break;
            }
        default:{
            printf("ERRO!");
            break;
        }
    }
}
