#include<stdio.h>

void troca(int mat[4][4])
{
	int l=0, c=0, aux[4]; 
	
	for(l=0; l<4; l++)
	{
		for(c=0;c<4;c++)
		{
			if(l == 0 || c == 3)
			{
				aux[l] = mat[l][c];
				mat[0][c] = mat[l][3];
				mat[l][3] = aux[l];
			}
		}
	}
	
	for(l=0; l<4; l++)
	{
		for(c=0;c<4;c++)
		{
			printf("%d	", mat[l][c]);
		}
		printf("\n");
	}
}

int main(void)
{
	int a[4][4];
	int l, c;
	
	for(l=0; l<4; l++)
	{
		for(c=0;c<4;c++)
		{
			printf("informe um numero:");
			scanf("%d", &a[l][c]);
		}
	}
	
	for(l=0; l<4; l++)
	{
		for(c=0;c<4;c++)
		{
			printf("%d	", a[l][c]);
		}
		printf("\n");
	}
	
	troca(a);
	
}
