#include<stdio.h>

void maior(int mat[6][6])
{
	int l=0, c=0, cont=0;
	
	for(l=0;l<6;l++)
	{
		for(c=0;c<6;c++)
		{
			if(mat[l][c] > 10)
			{
				cont++;
			}
		}
	}
	
	printf("%d numeros maiores que 10", cont);
}

int main (void)
{
	int a[6][6];
	int l=0, c=0;
	
	for(l=0;l<6;l++)
	{
		for(c=0;c<6;c++)
		{
			printf("informe um numero:");
			scanf("%d", &a[l][c]);
		}
	}
	
	maior(a);	
}
