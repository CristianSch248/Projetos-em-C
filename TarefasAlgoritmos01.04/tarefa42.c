//Escreva um programa que receba como entrada o valor do saque realizado pelo cliente
//de um banco e
//retorne quantas notas de cada valor serao necessarias para atender ao
//saque com a menor quantidade de notas possivel.
//Serao utilizadas notas de
//100, 50, 20, 10, 5, 2 e 1 real.
#include<stdio.h>
int main (void)
{
    int valor, cem, cinquenta, vinte, dez, cinco, dois, um;

    printf("valor do saque:\n");
    scanf("%d", &valor);

    cem = valor/100;
    valor = valor - cem * 100;
    cinquenta = valor/50;
    valor = valor -  cinquenta *50;
    vinte = valor/20;
    valor = valor -  vinte*20;
    dez = valor/10;
    valor = valor -  dez*10;
    cinco = valor/5;
    valor = valor -  cinco*5;
    dois = valor/2;
    valor =valor -  dois*2;
    um = valor/1;
    valor = valor - um*1;

    printf("%d nota de 100\n", cem);
    printf("%d nota de 50\n", cinquenta);
    printf("%d nota de 20\n", vinte);
    printf("%d nota de 10\n", dez);
    printf("%d nota de 5\n", cinco);
    printf("%d nota de 2\n", dois);
    printf("%d nota de 1\n", um);

}
