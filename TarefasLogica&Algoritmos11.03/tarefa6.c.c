#include <stdio.h>

int main (void){
    float valor_A, valor_B, total;

    printf("informe o valor_A: ");
     scanf("%f", &valor_A);

     printf("informe o valor_B: ");
     scanf("%f", &valor_B);

     total = valor_A + valor_B;
     printf("%.2f + %.2f = %.2f",valor_A, valor_B, total );
}
