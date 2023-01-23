#include<stdio.h>
int main(void){

float V, R, A, pi = 3.141592;

printf("informe o raio do cilindro: \n");
scanf("%f", &R);

printf("informe a altura do cilindro: \n");
scanf("%f", &A);

V = pi * (R * R) * A;

printf("o volume do cilindro eh de %.2f m3", V);

}
