#include<stdio.h>
#include<string.h>
int main (void)
{
    char nome[10];
    printf("informe seu nome:");
    fgets(nome, 10, stdin);
    if(nome[0] == 'a' || nome[0] == 'A')
    {
        puts(nome);
    }
}
