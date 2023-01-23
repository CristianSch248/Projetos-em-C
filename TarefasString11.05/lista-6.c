#include<stdio.h>
#include<string.h>

int main (void)
{
    char palavra1[10];
    char palavra2[10];
    int result;

    printf("informe uma palavra:\n");
    fgets(palavra1, 10, stdin);

    printf("informe a segunda palavra:\n");
    fgets(palavra2, 10, stdin);

    result = strcmp(palavra1, palavra2);

    if(result < 0)
    {
        puts(palavra1);
        puts(palavra2);
    }
    else
    {
        puts(palavra2);
        puts(palavra1);
    }
}
