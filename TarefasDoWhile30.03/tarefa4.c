//4. Fazer um algoritmo que leia números inteiros ate que seja informado zero, o qual deve ser
//desconsiderado e apos escreva quantos números informados são negativos, e a média aritmética dos
//números maiores que zero.

#include<stdio.h>

int main(void)
{
    int num, j=0,k=0;
    float media;

    do{
        printf("informe um numero:\n");
        scanf("%d", &num);

        if(num < 0)
        {
            j++;
        }
        else if(num > 0)
        {
            media = media+num;
            k++;
        }
    }while(num != 0);

    printf("total de numeros negativos: %d\n", j);
    printf("a media eh %.2f", media/k);

}
