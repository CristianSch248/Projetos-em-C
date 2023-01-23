#include<stdio.h>
#include<string.h>

int main (void)
{
    char palavra[20];
    int tam;

    printf("informe uma palavra:");
    fgets(palavra, 20, stdin);

    tam = strlen(palavra)-1;

    printf("%d", tam);




}
