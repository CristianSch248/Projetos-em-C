#include<stdio.h>
#include<string.h>
void cripto()
{
    char palavra[50];
    int numero, i, tam;

    printf("CRIPTOGRAFAR");

    printf("\n\n");

    printf("informe uma palavra/frase de ate 50 caracteres:");
    fgets(palavra, 50, stdin);

    printf("informe um numero para ser codificado:\n");
    scanf("%d", &numero);

    tam = strlen(palavra);

    for(i=0; i<tam; i++)
    {
        if(palavra[i] == ' ')
        {
            palavra[i] =' ';
        }
        else if (palavra[i] >=97 && palavra[i] <=119)
        {
            palavra[i] = palavra[i] + numero;
        }
        else if (palavra[i] == 'x')
        {
            palavra[i] = palavra[i] -10;
        }
        else if (palavra[i] == 'y')
        {
            palavra[i] = palavra[i] -10;
        }
        else if (palavra[i] == 'z')
        {
            palavra[i] = palavra[i] -10;
        }
    }
    puts(palavra);
}
void descripto()
{
    char palavra[50];
    int numero, i, tam;

    printf("DESCRIPTOGRAFAR");

    printf("\n\n");

    printf("informe uma palavra/frase de ate 50 caracteres:\n");
    fgets(palavra, 50, stdin);

    printf("informe um numero para ser codificado:\n");
    scanf("%d", &numero);

    tam = strlen(palavra);

    for(i=0; i<tam; i++)
    {
        if(palavra[i] == ' ')
        {
            palavra[i] =' ';
        }
        else if (palavra[i] <=119 && palavra[i] >=97)
        {
           palavra[i] = palavra[i] - numero;
        }
        else if (palavra[i] == 'x')
        {
            palavra[i] = 110;
        }
        else if (palavra[i] == 'y')
        {
            palavra[i] = 111;
        }
        else if (palavra[i] == 'z')
        {
            palavra[i] = 112;
        }
    }
    puts(palavra);
}
void main()
{
    int opcao;

    printf("Para criptografar a palavra informe 1\nPara descriptografar a palavra informe 2\n");

    printf("opcao:");
    scanf("%d", &opcao);

    setbuf(stdin, NULL);

    if(opcao == 1)
    {
        cripto();
    }
    else if(opcao == 2)
    {
        descripto();
    }
    else
    {
        printf("ERRO");
    }
}
