//Chico tem 1.50 metro e cresce 2 centimetros por ano,
//enquanto Ze tem 1.10 metros e cresce 3 centimetros por ano.
//Escreva um programa que calcule e imprima quantos anos
//serao necessarios para que Ze seja maior que Chico
#include<stdio.h>
int main (void)
{
    int ano = 0;
    float ch=1.50, ze=1.10;

    while(ze <= ch)
        {
            ze = ze + 0.03;
            ch = ch + 0.02;

            ano = ano +1;
        }
    printf("%d anos", ano);
}
