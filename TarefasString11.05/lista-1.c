#include<stdio.h>
#include<string.h>

int main (void)
{
    char palavra[11];

    printf("informe uma palavra de ate 10 letras: ");
    fgets(palavra, 11, stdin);

    strrev(palavra);

    puts(palavra);

}
