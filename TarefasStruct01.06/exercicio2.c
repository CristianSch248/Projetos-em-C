//Desenvolva um algoritmo para ler o nome, sexo e idade de 10 pessoas. Em seguida,
//solicitar ao usuário que digite um sexo e exibir o nome e idade das pessoas que possuem
//aquele sexo

#include<stdio.h>
#include<string.h>

struct pessoa{

    char nomef[50];
    char nomem[50];
    char sexo;
    int idadef;
    int idadem;
};
int main (void)
{
    struct pessoa user[10];
    char s;
    int f, m, i;

    for(i=0; i<10; i++)
    {

        setbuf(stdin, NULL);
        printf("para infomar seu sexo digite:\nf - se for feminino\nm - se for masculino:\n");
        scanf("%c", &user[i].sexo);

        if(user[i].sexo == 'f')
        {

            printf("FEMININO\n\n");

            setbuf(stdin, NULL);

            printf("informe seu nome:\n");
            gets(user[i].nomef);

            printf("informe sua idade:\n");
            scanf("%d", &user[i].idadef);
            f++;
        }
        else
        {

            printf("MASCULINO\n\n");

            setbuf(stdin, NULL);

            printf("informe seu nome:\n");
            gets(user[i].nomem);

            printf("informe sua idade:\n");
            scanf("%d", &user[i].idadem);

            m++;
        }
    }

    setbuf(stdin, NULL);
    printf("informe de quais sexos serao mostrados os perfis, sendo eles:f - feminino\nm - masculino\n");
    scanf("%c", &s);

    if(s == 'f')
    {
        for(i=0; i<f; i++)
        {
            puts(user[i].nomef);
            printf("%d\n\n", user[i].idadef);
        }
    }
    else
    {
        for(i=0; i<m; i++)
        {
            puts(user[i].nomem);
            printf("%d\n\n", user[i].idadem);
        }
    }
}
