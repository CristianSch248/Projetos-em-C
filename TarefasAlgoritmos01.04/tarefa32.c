#include <stdio.h>
int main(void){
    int QUANT, i=0, N, X, CONT=1;
printf("quantos numeros voce quer informar?\n");
scanf("%d", &QUANT);

for(i=0; i<QUANT; i++) //tudo o que estiver aqui dentro vai repetir
{
    printf("informe o numero:\n");
    scanf("%d", &N);// aqui vai ser guardado o numero para ser comparado e ver quantas vezes ele foi repetido
    // no primeiro IF é comparado para ver se o numero ja foi escrito, se o numero ja foi escrito
    //adiciona-se +1 na variavel CONT e se não for igual o numero passa para O #segundo IF
    //onde ele e comparado para ver qual é maior
    if(N == X)//X e a variavel que vai guardar o numero
    {
    CONT++;
    }
    if(N > X)
    {
    X = N;
    }
}
printf("o muior numero eh %d\n", X);
printf("o maior numero foi digitado %d vezes", CONT);
}

