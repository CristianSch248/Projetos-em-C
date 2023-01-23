#include<stdio.h>
int main(void){
float k,m;

printf("informe uma velocidade em KM/H e o programa vai tranformar ele em MS\n");
printf("informe velocidade\n");
scanf("%f", &k);

m=k/3.6;
printf("a velocidade eh de %.2fM/S", m);



}
