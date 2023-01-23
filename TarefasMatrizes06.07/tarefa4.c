#include<stdio.h>

int main(void)
{
	int a[2][3];
	int b[3][2];
	
	int l,c;
	
	for(l=0;l<2;l++)
	{
		for(c=0;c<3;c++)
		{
			printf("informe um numero:");
			scanf("%d", &a[l][c]);
		}
	}
	
	for(l=0;l<2;l++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d ", a[l][c]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(l=0;l<2;l++)
	{
		for(c=0;c<3;c++)
		{
			b[c][l] = a[l][c];
		}
	}
	
	for(l=0;l<3;l++)
	{
		for(c=0;c<2;c++)
		{
			printf("%d ", b[l][c]);
		}
		printf("\n");
	}
	
	
}
