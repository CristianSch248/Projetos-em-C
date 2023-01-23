#include <stdio.h>
int main(void){

float c, f;

printf("informe a temperatura em Celsius para saber em Fehrenheit \n");
printf("informe temperatura: \n");
scanf("%f", &c);

f=c*(9.0/5.0)+32.0;
printf("a temperatura eh:%.2f graus Ferhenheit", f);
}
