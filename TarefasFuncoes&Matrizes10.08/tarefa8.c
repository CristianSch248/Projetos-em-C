#include <stdio.h>

void substitui(int matA[5][5], matB[5][5])
{
	int C[20];
	int D[20];
	int l=0, c=0, i=0;
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			if(l < c)
			{
				C[i] = matA[l][c];
				matA[l][c] = 0;
				i++;
			}
		}
	}
	
	i=0;
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			if(l > c)
			{
				D[i] = matB[l][c];
				matB[l][c] = 0;
				i++;
			}
		}
	}
	
	i=0;
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			if(matA[l][c] == 0)
			{
				matA[l][c] = D[i];
				i++;
			}
		}
	}
	
	i=0;
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			if(matB[l][c] == 0)
			{
				matB[l][c] = C[i];
				i++;
			}
		}
	}
	
	i=0;

	printf("matriz A\n");
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("%d ", matA[l][c]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	printf("matriz B\n");
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("%d ", matB[l][c]);
		}
		printf("\n");
	}
	
	printf("\n\n");
}

int main(void)
{
	int A[5][5];
	int B[5][5];
	
	int l=0, c=0;
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("informe um numero para A:");
			scanf("%d", &A[l][c]);
		}
	}
	
	printf("\n\n");
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("informe um numero para B:");
			scanf("%d", &B[l][c]);
		}
	}
	
	printf("matriz A\n");
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("%d ", A[l][c]);
		}
		printf("\n");
	}
	
	
	printf("\n\n");
	
	printf("matriz B\n");
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("%d ", B[l][c]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	substitui(A,B);
}
