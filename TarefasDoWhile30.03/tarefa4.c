//4. Fazer um algoritmo que leia n�meros inteiros ate que seja informado zero, o qual deve ser
//desconsiderado e apos escreva quantos n�meros informados s�o negativos, e a m�dia aritm�tica dos
//n�meros maiores que zero.

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
