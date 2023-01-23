#include<stdio.h>

int main(void)
{
	int A[4][4];
	int B[4][4];
	int C[4][4];
	
	int l, c;
	
	for(l=0;l<4;l++)
	{
		for(c=0;c<4;c++)
		{
			printf("matriz A:");
			scanf("%d", &A[l][c]);
		}
	}
	
	for(l=0;l<4;l++)
	{
		for(c=0;c<4;c++)
		{
			printf("matriz B:");
			scanf("%d", &B[l][c]);
		}
	}
	
	for(l=0;l<4;l++)
	{
		for(c=0;c<4;c++)
		{
			C[l][c] = A[l][c] + B[l][c];
		}
	}
	
	
	for(l=0;l<4;l++)
	{
		for(c=0;c<4;c++)
		{
			printf("%d ", C[l][c]);
		}
		printf("\n");
	}
	
}
