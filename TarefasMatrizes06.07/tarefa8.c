#include<stdio.h>

int main(void)
{
	float A[5][5];
	float B[5][5];
	float C[5][5];

	int l=0, c=0, linha=0, coluna=0;	
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("informe um numero para a matriz A:");
			scanf("%f", &A[l][c]);
		}
	}
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("informe um numero para a matriz B:");
			scanf("%f", &B[l][c]);
		}
	}
	
	linha = 0;
	coluna = 0;
	
	while(linha < 5 && coluna <5)
	{
		for(l=0; l<5;l++)
		{
			for(c=0;c<5;c++)
			{
				if(A[linha][coluna] == B[l][c])
				{
					C[linha][coluna] = 1;
				}
				else
				{
					C[linha][coluna] = 0;
				}
			}	
		}
		
		linha++;
		coluna++;
	}
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("%d ", A[l][c]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("%d ", B[l][c]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("%d ", C[l][c]);
		}
		printf("\n");
	}
}
