#include<stdio.h>

int main (void)
{
	float a[4][3];
	
	int l, c, procuraL, procuraC;
	
	for(l=0;l<4;l++)
	{
		for(c=0;c<3;c++)
		{
			printf("informe um numero:");
			scanf("%f", &a[l][c]);
		}
	}
	
	printf("informe uma linha:");
	scanf("%d", &procuraL);
	
	printf("informe uma coluna:");
	scanf("%d", &procuraC);
	
	for(l=0;l<4;l++)
	{
		for(c=0;c<3;c++)
		{
			printf("%.2f ", a[l][c]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	printf("%.2f ", a[procuraL][procuraC]);
}
