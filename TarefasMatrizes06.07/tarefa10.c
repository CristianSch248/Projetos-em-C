#include<stdio.h>
int main(void)
{
	int A[5];
	int B[5];
	int C[2][5];
	int l,c;
	
	
	for(l=0;l<5;l++)
	{
		printf("informe um valor para A:");
		scanf("%d", &A[l]);
	}
	
	printf("\n\n");
	
	for(l=0;l<5;l++)
	{
		printf("informe um valor para B:");
		scanf("%d", &B[l]);
	}
	
	for(l=0;l<2;l++)
	{
		for(c=0;c<5;c++)
		{
			if(l==0)
			{
				C[l][c] = A[c];
			}
			else
			{
				C[l][c] = B[c];
			}
		}
	}
	
	for(l=0;l<2;l++)
	{
		for(c=0;c<5;c++)
		{
			printf("%d ", C[l][c]);
		}
		printf("\n");
	}
}
