#include <stdio.h>

void busca(int mat[20][20])
{
	int l=0, c=0, busca=0;
	
	printf("informe um numero de busca:");
	scanf("%d", &busca);

	for(l=0;l<20;l++)
	{
		for(c=0;c<20;c++)
		{
			if(busca == a[l][c])
			{
				printf("linha %d\ncoluna %d", l,c);
			}
			else
			{
				printf("nao encontrado\n");
			}
		}
	}	
}

int main (void)
{
	int a[20][20];
	int l=0, c=0;
	
	for(l=0;l<20;l++)
	{
		for(c=0;c<20;c++)
		{
			printf("informe um numero:");
			scanf("%d", &a[l][c]);
		}
	}
	
	busca(a);
}
