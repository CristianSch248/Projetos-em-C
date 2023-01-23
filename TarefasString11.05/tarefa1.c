#include<stdio.h>
#include<string.h>

int main (void)
{
    char nome[10];
    int i, n=4;

    printf("informe seu nome:");
    fgets(nome, 10, stdin);

    for(i=0; i<n; i++)
    {
        printf("%c", nome[i]);
    }
}
