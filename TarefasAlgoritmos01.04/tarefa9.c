#include<stdio.h>
int main (void){

int N, hora, segundos, minutos;

printf("informe um numero: \n");
scanf("%d", &N);

hora = N / 3600;
minutos = (N%3600)/60;
segundos = (N%3600)%60;

printf("horas: %d\n", hora);
printf("minutos: %d\n", minutos);
printf("seguntos: %d\n", segundos);


}
