#include <stdio.h>
void zero(int MAT[6][6])
{
	int l=0, c=0;
	
	for(l=0;l<6;l++)
	{
		for(c=0;c<6;c++)
		{
			if( (MAT[l][c] < 0) && (l != c) && (l + c != 5) )
			{
				MAT[l][c] = 0;
			}
		}
	}
	
	for(l=0;l<6;l++)
	{
		for(c=0;c<6;c++)
		{
			printf("%d ", MAT[l][c]);
		}
		printf("\n");
	}
}

int main(void)
{
	int a[6][6];
	int l=0, c=0;
	
	for(l=0;l<6;l++)
	{
		for(c=0;c<6;c++)
		{
			scanf("%d", &a[l][c]);
		}
	}
	zero(a);
}	
