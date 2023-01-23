#include<stdio.h>

int main (void)
{
	int mat[5][5];
	int l, c;
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("informe um numero:");
			scanf("%d", &mat[l][c]);
		}
	}
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("%d ", mat[l][c]);
		}
		printf("\n");
	}
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			if(c>l)
			{
				printf("%d ", mat[l][c]);
			}
			else
			{
				printf("_ ");
			}
		}
		printf("\n");
	}
	
}
