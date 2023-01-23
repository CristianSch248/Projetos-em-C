#include<stdio.h>

int main(void)
{
	float alt[5][10];
	float maiores_alturas[5];
	int l=0, c=0, maior=0, equipe=1; 
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<10;c++)
		{
			printf("altura do atleta da equipe %d:", equipe);
			scanf("%f", &alt[l][c]);
		}
		equipe++;
	}
	
	equipe = 1;
	
	for(l=0;l<5;l++)
	{
		for(c=0;c<10;c++)
		{
			if(alt[l][c] > maior)
			{
				maior = alt[l][c];
				maiores_alturas[l] = maior;
			}
		}
		maior = 0;
	}
	
	for(l=0;l<5;l++)
	{
		printf("a maior altura da equipe %d foi de %.2f\n", equipe, maiores_alturas[l]);
		equipe++;
	}
}
