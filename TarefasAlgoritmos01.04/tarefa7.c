#include<stdio.h>
int main(void){
int N, D, T, soma;
 printf("informe um numero: \n");
 scanf("%d", &N);

D = (N * 2) - 1;
T = (N * 3) + 1;
soma = D + T;

printf("na tela esta a soma  do sucessor do triplo do seu numero\n com o antecessor do dobro do seu numero\n");
printf("o resultado eh %d", soma);

}
