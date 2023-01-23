#include <stdio.h>

void igual(int matrizA[4][4], matrizB[4][4])
{
	int l, c, linha, coluna; 
	
	for(l=0;l<4;l++)
	{
		for(c=0;c<4;c++)
		{	
			for(linha=0;linha<4;linha++)
			{
				for(coluna=0;coluna<4;coluna++)
				{
					if(A[l][c] == B[linha][coluna])
					{
						printf("%d ", A[l][c]);
					}
				}
			}		
		}
	}	
}

int main(void)
{
	int A[4][4];
	int B[4][4];
	
	int l, c; 
	
	for(l=0;l<4;l++)
	{
		for(c=0;c<4;c++)
		{
			printf("informe um valor para A:");
			scanf("%d", &A[l][c]);
		}
	}
	printf("\n\n");
	for(l=0;l<4;l++)
	{
		for(c=0;c<4;c++)
		{
			printf("informe um valor para B:");
			scanf("%d", &B[l][c]);
		}
	}
	igual(A,B);
}
