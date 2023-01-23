#include<stdio.h>
int main(void){
float r, g, pi = 3.14;

printf("informe um algulo em graus e transformaremos em radianos \n");
printf("informe angulo: \n");
scanf("%f", &g);

r = g * pi/180;

printf("o valor em radianos eh %.2f", r);




}
