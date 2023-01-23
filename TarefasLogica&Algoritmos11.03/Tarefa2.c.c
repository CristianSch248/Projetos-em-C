#include <stdio.h>

int main (void){
    int valor_A, valor_B, total;

    printf("informe o valor_A:  ");
    scanf("%d", &valor_A );

    printf("informe valor_B:  ");
    scanf("%d", &valor_B );

    total = valor_A + valor_B;
    printf("%d + %d = %d",valor_A, valor_B, total);
    }
