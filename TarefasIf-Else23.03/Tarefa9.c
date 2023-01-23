#include <stdio.h>

int main (void)
{
    float media, v1, v2, v3;

    printf("informe um numero: \n");
    scanf("%f", &v1);

    printf("informe o segundo numero: \n");
    scanf("%f", &v2);

    printf("informe o terceiro numero: \n");
    scanf("%f", &v3);


    if (v1 >= v2 && v2 >= v3)//se o v1 > v2 e > v3 o v3 fica excluido
    {
        media = (v1 + v2) / 2;

        printf("%.2f", media);
    }
    else if (v1 <= v2 && v2 <= v3)//se o v3 > v2 e >v1 o v1 fica excluido
    {
        media = (v2 + v3) / 2;

        printf("%.2f", media);
    }
    else if (v1 >= v3 && v3 >= v2)// se o v
    {
        media = (v1 + v3) / 2;
        printf("%.2f", media);
    }


}

