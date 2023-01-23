#include<stdio.h>
#include<string.h>
int main (void)
{
    char nome[50];
    char iniciais[5];
    int tam, i, j=0;

    printf("informe seu nome:");
    fgets(nome, 50, stdin);

    iniciais[0] = nome[0];
    j++;

    tam = strlen(nome);

    tam--;

    for(i=0; i<tam; i++)
    {
        if(nome[i] == ' ')
        {
            iniciais[j] = nome[i+1];
            j++;
        }
    }
    for(i=0; i<j; i++)
    {
        printf("%c", iniciais[i]);
    }
}
