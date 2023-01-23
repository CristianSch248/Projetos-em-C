#include<stdio.h>

void troca(int mat[5][5])
{
	int l, c, aux;
	int linha, coluna;
	
	l=0;
	for(c=4;c>=0;c++)
	{
		aux = mat[l][c];
		mat[l][c] = mat[linha][coluna];
		mat[linha][coluna] = aux;
		linha++;
		coluna++;
	}
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("%d	", mat[l][c]);
		}
		printf("\n\n");
	}
}

int main(void)
{
	int A[5][5];
	
	int l, c;
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("informe um numero:");
			scanf("%d", &A[l][c]);
		}
	}
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("%d	", A[l][c]);
		}
		printf("\n\n");
	}
	printf("\n\n");
	
	troca(A);
	
}
