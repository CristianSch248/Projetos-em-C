#include<stdio.h>

void deixazero(int MAT[5][5])
{
	int l, c;
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			if(l==c)
			{
				MAT[l][c] = 1;
			}
			else
			{
				MAT[l][c] = 0;
			}
		}
	}
}

int main(void)
{
	int mat[5][5];
	
	int l=0, c=0;
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("informe um numero:");
			scanf("%d", &mat[l][c]);
		}
	}
	
	deixazero(mat);
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("%d ", mat[l][c]);
		}
		printf("\n");
	}
	
	
}
