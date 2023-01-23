//Faça um algoritmo para ler os valores gastos em cheque por uma pessoa durante um mês,
//e depois imprimir:
//a lista com todos os valores,
//o maior valor,
//o menor valor e a média de todos os valores.
//No início do
//algoritmo o usuário deve informar quantos cheques foram usados;
//estabeleça um número máximo de cheques.
#include<stdio.h>
int main (void)
{
    int quant, i;
    float cheque[quant];
    float ma, me, media, soma;

    printf("informe até 5 cheques");
    printf("quantos cheques voce gastou este mes:\n");
    scanf("%d", &quant);

    for(i=0; i<quant; i++)
    {
        printf("valor do cheque:\n");
        printf("%f", cheque[i]);
    }
    for(i=0; i<quant; i++)
    {
        if(cheque[i]<cheque[i-1])
        {
            ma = cheque[i];
        }
        else
        {
            me = cheque[i];
        }
    }
    for(i =0; i<quant; i++)
    {
        soma = soma + cheque[i];
    }
    media = (float) soma/quant;

    for(i=0; i<quant; i++)
    {
        printf("%.2f ", cheque[i]);
    }
    printf("%.2f\n", ma);
    printf("%.2f\n", me);
    printf("a media de gasto foi %.2f\n", media);
}
