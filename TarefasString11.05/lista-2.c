#include<stdio.h>
#include<string.h>

int main (void)
{
    char palavra1[10];
    char palavra2[10];
    int tam, C=0, i;

    printf("informe uma palavra de 10 letras e veremos se ela eh igual de tras para frente\n");

    printf("palavra:\n");
    fgets(palavra1, 10, stdin);

    strcpy(palavra2, palavra1);

    strrev(palavra2);

    tam = strlen(palavra1);

    for(i=0; i<tam; i++)
    {
        if(palavra1[i] == palavra2[i+1])
        {
            C++;
        }
    }

    if(tam == C+1)
    {
        printf("as palavras sao Palindromo");
    }
    else
    {
        printf("as palvras nao sao Palindromo");
    }

}
