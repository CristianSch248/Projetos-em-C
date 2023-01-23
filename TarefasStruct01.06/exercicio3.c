#include<stdio.h>
#include<string.h>

struct store
{
    char vendedor[20];
    int codigo;
    int filial;
    float valor;
};

int main (void)
{
    struct store loja[10];
    int venda, i=0, j=0;
    float total;

    for(i=0; i<4; i++)
    {

        setbuf(stdin, NULL);
        printf("nome do vendedor:\n");
        fgets(loja[i].vendedor, 20, stdin);
        setbuf(stdin, NULL);

        printf("informe o código do vendedor:\n");
        scanf("%d", &loja[i].codigo);
        
        printf("informe a filial:\n");
        scanf("%d", &loja[i].filial);
        
        printf("informe o valor de venda:\n");
        scanf("%f", &loja[i].valor);
        
        printf("\n\n");
   
    }
    for(i=1; i<=10; i++)
    {
        total = 0;
        
        for(j=0; j<10; j++)
        {
          if (loja[j].codigo ==  i)
          {
           
           total = total + loja[i].valor;
        
          }
        }
        
        printf("\n O total vendido  pelo vendedor %d foi de %.2f",i, total);
    }
}