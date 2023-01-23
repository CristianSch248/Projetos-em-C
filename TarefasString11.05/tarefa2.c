#include<stdio.h>
#include<string.h>

int main (void)
{
    char nome[20];
    int idade, sexo;

    printf("informe seu nome:");
    fgets(nome, 20, stdin);

    printf("seu sexo eh\n1-feminino\n2-masculino:");
    scanf("%d", &sexo);

    printf("informe sua idade:");
    scanf("%d", &idade);

    if(sexo == 1 && idade < 25)
    {
        printf("%sACEITA", nome);
    }
    else
    {
        printf("NAO ACEITA(O)");
    }
}
