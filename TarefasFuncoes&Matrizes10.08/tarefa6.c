#include <stdio.h>

void trianguloinferior(int mat[8][8])
{
	int l, c;
	
	for(l=0;l<8;l++)
	{
		for(c=0;c<8;c++)
		{
			if(l < c)
			{
				mat[l][c] = 0;
			}
		}
	}
	
	for(l=0;l<8;l++)
	{
		for(c=0;c<8;c++)
		{
			printf("%d ", a[l][c]);
		}
		
		printf("\n");
	}
}

int main(void)
{
	int a[8][8];
	int l, c;

	for(l=0;l<8;l++)
	{
		for(c=0;c<8;c++)
		{
			printf("informe um numero:");
			scanf("%d", &a[l][c]);
		}
	}
	
	for(l=0;l<8;l++)
	{
		for(c=0;c<8;c++)
		{
			printf("%d ", a[l][c]);
		}
		
		printf("\n");
	}
	
	trianguloinferior(a);
	
}
