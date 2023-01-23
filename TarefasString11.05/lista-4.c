#include<stdio.h>
#include<string.h>

int main (void)
{
    char palavra[100];
    char letra ;
    int i, tam, j=0;

    printf("informe uma palavra:");
    fgets(palavra, 10, stdin);

    printf("informe uma letra qualquer:");
    scanf("%c", &letra);

    tam = strlen(palavra);

    for(i=0; i<tam; i++)
    {
        if(palavra[i] == 'a')
        {
            palavra[i] = letra;
            j++;
        }
        else if (palavra[i] == 'e')
        {
            palavra[i] = letra;
            j++;
        }
        else if (palavra[i] == 'i')
        {
            palavra[i] = letra;
            j++;
        }
        else if(palavra[i] == 'o')
        {
            palavra[i] = letra;
            j++;
        }
        else if(palavra[i] == 'u')
        {
            palavra[i] = letra;
            j++;
        }
    }
    for(i=0; i<tam; i++)
    {
        printf("%c", palavra[i]);
    }
    printf("%d", j);
}
