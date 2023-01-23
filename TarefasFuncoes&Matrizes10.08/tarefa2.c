#include<stdio.h>

void maiorelemonto(int mat1[4][4], int mat2[4][4])
{
	int mat3[4][4];
	int l, c;
	
	for(l=0; l<4; l++)
	{
		for(c=0; c<4; c++)
		{
			if(mat1[l][c] > mat2[l][c])
			{
				mat3[l][c] = mat1[l][c];
			}
			else
			{
				mat3[l][c] = mat2[l][c];
			}
		}
	}
	
	for(l=0; l<4; l++)
	{
		for(c=0; c<4; c++)
		{
			printf("%d ", mat3[l][c]);
		}
		printf("\n");
	}
	
}

int main (void){
	
	int A[4][4];
	int B[4][4];
	int c=0, l=0;	

	for(l=0; l<4; l++)
	{
		for(c=0; c<4; c++)
		{
			printf("informe um numero para a matriz A: ");
			scanf("%d", &A[l][c]);
		}
	}
	
	for(l=0; l<4; l++)
	{
		for(c=0; c<4; c++)
		{
			printf("informe um numero para a matriz B: ");
			scanf("%d", &B[l][c]);
		}
	}
	
	maiorelemento(A,B);
}
