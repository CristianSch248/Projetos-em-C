#include<stdio.h>
int main (void){
float DESC, VALOR, AV, PARC, COM, COMP;

printf("informe o valor da venda:\n");
scanf("%f", &VALOR);

DESC=VALOR*0.10;
AV=VALOR-DESC;

PARC=VALOR/3;

COM=AV/20;

COMP=VALOR/20;

printf("o total apagar com desconto de 10 PORCENTO eh %.2f REAIS\n", AV);

printf("o valor de cada parcela dividido em 3x eh %.2f REAIS\n", PARC);

printf("a comissao do vendedor eh de %.2f REAIS\n", COM);

printf("a comissao do vendedor com compra parcelada eh de %.2f REAIS\n", COMP);
}
