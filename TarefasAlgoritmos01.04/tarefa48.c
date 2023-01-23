#include<stdio.h>
int main (void)
{
    char letra;
    int OP;

    printf("LETRA MAIUSCULA    1\n");
    printf("LETRA MINUSCULA    2\n");
	
    printf("informe a operacao:\n");
    printf("%d", &OP);

	getchar();

    switch(OP)
    {
    case 1 :
    	{
    		printf("informe uma letra MAIUSCULA:\n");
   			scanf("%c", &letra);
   			getchar();
   			letra = letra - 32;
    		printf("a letra é %c", letra);
    		break;
    	}
    case 2 :
    	{
    		printf("informe uma letra MINUSCULA:\n");
    		scanf("%c", &letra);
    		getchar();
    		letra = letra + 32;
    		printf("a letra é %c", letra);
    		break;
    	}
    }
}
