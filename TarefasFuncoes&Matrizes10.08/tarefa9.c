#include <stdio.h>

void maiorN(int Maior[4][4])
{
	int l=0, c=0, maior=0;
	
	for(l=0; l<4; l++)
	{
		for(c=0;c<4;c++)
		{
			if(l == c)
			{
				if(Maior[l][c] > maior)
				{
					maior = Maior[l][c];
				}
			}
		}
	}
	printf("maior %d\n", maior);
}

void somaD(Soma[4][4])
{
	int l=0, c=0, soma=0;
		
	for(c=4;c>=0;c--)
	{
		soma = soma + Soma[l][c];		
		l++;
	}
	printf("soma %d\n", soma);	
}

int main(void)
{
	int a[4][4];
	int l=0, c=0;
	
	for(l=0; l<4; l++)
	{
		for(c=0;c<4;c++)
		{
			scanf("%d", &a[l][c]);
		}
	}
	maiorN(a);
	somaD(a);
}
