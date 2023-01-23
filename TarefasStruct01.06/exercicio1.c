#include <stdio.h>
#include <string.h>

struct user{
char nome[50];
char endereco[50];
char email[50];

};

int main (void)
{
    struct user A;

    printf("informe seu nome:\n");
    gets(A.nome);

    printf("informe seu endereco:\n");
    gets(A.endereco);

    printf("informe seu E-Mail:\n");
    gets(A.email);

    printf("\n\n");

    puts(A.nome);
    puts(A.endereco);
    puts(A.email);
}
