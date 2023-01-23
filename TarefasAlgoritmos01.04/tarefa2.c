#include<stdio.h>
int main(void){

float c, k;

printf("digite a temperatura em Kelvin para ser tranformada em Celcius \n");
printf("informe temperatura: \n");
scanf("%f", &k);

c = k - 273.15;
printf("a temperatura eh: %.2f graus Celsuis", c);

}
