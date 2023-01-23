#include<stdio.h>

int main (void)
{
	int mat[3][4];
	int l,c;
	
	for(l=0;l<3;l++)
	{
		for(c=0;c<4;c++)
		{
			mat[l][c] = l + c;
		}
	}
	
	for(l=0;l<3;l++)
	{
		for(c=0;c<4;c++)
		{
			printf("%d ", mat[l][c]);
		}
		printf("\n");
	}


	
	
}
