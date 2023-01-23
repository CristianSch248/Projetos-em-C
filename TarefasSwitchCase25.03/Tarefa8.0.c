#include<stdio.h>

int main (void)
{

    char nome[40];
    int id, UF, time;

    printf("informe seu nome: \n");
    scanf("%s", &nome);

    printf("informe sua idade: \n");
    scanf("%d", &id);

    printf("ESTADOS \n");
    printf("1 - SP \n");
    printf("2 - RJ \n");
    printf("3 - RS \n");
    printf("4 - MG \n");
    printf("5 - CE \n");
    printf("6 - SC \n");
    printf("7 - PR \n");
    printf("8 - BA \n");
    printf("9 - GO \n");
    printf("10- AL \n");

    printf("Selecione o estado do seu time: \n");
    scanf("%d", &UF);

    switch (UF)
    {
    case 1:
    {
        printf("1 - Palmeiras \n2 - Santos \n3 - Sao Paulo \n4 - Corinthias \n");
        printf("escolha o time: \n");
        scanf("%d", &time);

        switch (time)
        {
        case 1 :
        {
            printf("1 - Palmeiras, %s, \n%d",nome, id);
            break;
        }
        case 2 :
        {
            printf("1 - Santos, %s, \n%d",nome, id);
            break;
        }
        case 3 :
        {
            printf("1 - Sao Paulo, %s, \n%d",nome, id);
            break;
        }
        case 4 :
        {
            printf("1 - Corinthias, %s, \n%d",nome, id);
            break;
        }
        default:
            printf("ERRO!");
            break;
        }
    }
    case 2:
    {
        printf("1 - Flamengo \n2 - Botafogo \n3 - Fluminense \n4 - Vasco \n");
        printf("escolha o time: \n");
        scanf("%d", &time);

        switch (time)
        {
        case 1 :
        {
            printf("1 - Flamendo, %s, \n%d",nome, id);
            break;
        }
        case 2 :
        {
            printf("1 - Botafogo, %s, \n%d",nome, id);
            break;
        }
        case 3 :
        {
            printf("1 - Fluminense, %s, \n%d",nome, id);
            break;
        }
        case 4 :
        {
            printf("1 - Vasco, %s, \n%d",nome, id);
            break;
        }
        default:
            printf("ERRO!");
            break;
        }
    }
    case 3:
    {
        printf("1 - Internacional \n2 - Gremio \n");
        printf("escolha o time: \n");
        scanf("%d", &time);

        switch (time)
        {
        case 1 :
        {
            printf("1 - Internacional, %s, \n%d",nome, id);
            break;
        }
        case 2 :
        {
            printf("1 - Gremio, %s, \n%d",nome, id);
            break;
        }
        default:
            printf("ERRO!");
            break;
        }
        break;
    }
    case 4:
    {
        printf("1 - Atletico-MG \n2 - Cruseiro \n");
        printf("escolha o time: \n");
        scanf("%d", &time);

        switch (time)
        {
        case 1 :
        {
            printf("1 - Atletico-MG, %s, \n%d",nome, id);
            break;
        }
        case 2 :
        {
            printf("1 - Cruseiro, %s, \n%d",nome, id);
            break;
        }
        default:
            printf("ERRO!");
            break;
        }
        break;
    }
    case 5:
    {
        printf("1 - Ceara \n2 - fortaleza \n");
        printf("escolha o time: \n");
        scanf("%d", &time);

        switch (time)
        {
        case 1 :
        {
            printf("1 - Ceara, %s, \n%d",nome, id);
            break;
        }
        case 2 :
        {
            printf("1 - Fortaleza, %s, \n%d",nome, id);
            break;
        }
        default:
            printf("ERRO!");
            break;
        }
        break;
    }
    case 6:
    {
        printf("1 - Chapecoense \n2 - avai \n");
        printf("escolha o time: \n");
        scanf("%d", &time);

        switch (time)
        {
        case 1 :
        {
            printf("1 - chapecoense, %s, \n%d",nome, id);
            break;
        }
        case 2 :
        {
            printf("1 - avai, %s, \n%d",nome, id);
            break;
        }
        default:
            printf("ERRO!");
            break;
        }
        break;
    }
    case 7:
    {
        printf("1 - Atletico-PR \n");
        printf("escolha o time: \n");
        scanf("%d", &time);

        switch (time)
        {
        case 1 :
        {
            printf("1 - Atletico-PR, %s, \n%d",nome, id);
            break;
        }
        default:
            printf("ERRO!");
            break;
        }
        break;
    }
    case 8:
    {
        printf("1 - Bahia \n");
        printf("escolha o time: \n");
        scanf("%d", &time);

        switch (time)
        {
        case 1 :
        {
            printf("1 - Bahia, %s, \n%d",nome, id);
            break;
        }
        default:
            printf("ERRO!");
            break;
        }
        break;
    }
    case 9:
    {
        printf("1 - Goias \n");
        printf("escolha o time: \n");
        scanf("%d", &time);

        switch (time)
        {
        case 1 :
        {
            printf("1 - Goias, %s, \n%d",nome, id);
            break;
        }
        default:
            printf("ERRO!");
            break;
        }
        break;
    }
    case 10:
    {
        printf("1 - CSA \n");
        printf("escolha o time: \n");
        scanf("%d", &time);

        switch (time)
        {
        case 1 :
        {
            printf("1 - CSA, %s, \n%d",nome, id);
            break;
        }
        default:
            printf("ERRO!");
            break;
        }
        break;
    }
    default:
            printf("ERRO!");
            break;
    }
}

