#include<stdio.h>
int main(void){
float r, A, pi=3.141592;

printf("informe o raio de um curculo: \n");
scanf("%f", &r);

A = pi * (r * r);
printf("a area do circulo eh de %.2f cm2", A);

}
