#include<stdio.h>
int main (void)
{
    int cont=0;
    float media, i=1, idade, soma=0;
    printf("informe ZERO para SAIR\n");

    for(i=1; idade!=0; i++)
    {
        printf("informe idade:\n");
        scanf("%f", &idade);
        fgetc(stdin);

        media = media + idade;
        cont++;
    }
    media = media / cont;
    printf("media de idade eh %.2f\n", media);
}
