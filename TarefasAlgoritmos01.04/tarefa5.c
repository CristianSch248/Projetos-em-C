#include<stdio.h>
int main (void){
float l, m;

printf("informe o numero de metros cubicos e transformaremos em litros\n");
printf("informe metros cubicos: \n");
scanf("%f", &m);

l = m *1000;
printf("a quantidade de litros eh %.2f", l);

}
