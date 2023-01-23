
#include<stdio.h>
#include<string.h>

struct editora{
    
    char sexo;
    int idade;
    int livro;

};

int main (void)
{
        struct editora pessoa[20]; 
        int a=0, b=0, c=0, i=0;

        for(i=0; i<4; i++)
        {
            
            printf("informe seu sexo:\n");
            scanf("%c", &pessoa[i].sexo);
            
            getchar();
            
            printf("informe a sua idade:\n");
            scanf("%d", &pessoa[i].idade);
            
            printf("informe a quantidade de livros lidos:\n");
            scanf("%d", &pessoa[i].livro);
            
            printf("\n\n");
        
        }
        
    for(i=0; i<4; i++)
    {
        if(pessoa[i].idade < 10)
        {
            a = a + pessoa[i].livro;
        }
        else if (pessoa[i].sexo == 'f' &&  pessoa[i].livro >= 5)
        {
            b++;
        }
        else if (pessoa[i].livro == 0)
        {
            c++;
        }
    }
            printf("A quantidade total de livros lidos pelos entrevistados menores de 10 anos foi de %d\n", a);
            
            printf("A quantidade de mulheres que leram 5 livros ou mais foi de %d\n", b);
        
            printf("O percentual de pessoas que não leram livros foi de %d\n", c);
        
}