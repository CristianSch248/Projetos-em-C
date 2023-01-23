#include <stdio.h>
int main (void){
float M, A;

printf("informe o tamanho da area para transformarmos em ACRES: \n");
scanf("%f", &M);

A = M * 0.000247;
printf("a area total eh de %.4f ACRES", A);


}
