#include<stdio.h>
int main (void){

float N;

printf("informe um numero: \n");
scanf("%f", &N);

if(N > 0)
    {
    printf("a raiz quadradada do numero que voce informou eh %.2f", sqrt(N));
    }
else
    {
    printf("numero invalido");
    }
}
