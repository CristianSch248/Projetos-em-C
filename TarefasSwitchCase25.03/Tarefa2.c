#include <stdio.h>
 int main (void){
    int N;

    printf("informe um numero de 0 a 10: \n");
    scanf("%d", &N);

    switch(N)
    {
        case 0:
            {
            printf("ZERO");
            break;
            }
        case 1:
            {
            printf("UM");
            break;
            }
        case 2:
            {
            printf("DOIS");
            break;
            }
        case 3:
            {
            printf("TRES");
            break;
            }
        case 4:
            {
            printf("QUATRO");
            break;
            }
        case 5:
            {
            printf("CINCO");
            break;
            }
        case 6:
            {
            printf("SEIS");
            break;
            }
        case 7:
            {
            printf("SETE");
            break;
            }
        case 8:
            {
            printf("OITO");
            break;
            }
        case 9:
            {
            printf("NOVE");
            break;
            }
        case 10:
            {
            printf("DEZ");
            break;
            }
        default:
            {
            printf("ERRO!");
            }
        }
 }
