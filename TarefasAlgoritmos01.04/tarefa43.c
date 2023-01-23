#include <stdio.h>
int main (void){
	int n, i=0, j=0, num=1;

	printf("informe um numero inteiro positivo e depois mostraremos");
	printf("\no triangulo de floyd com o total de linhas que informou:\n");
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{ 
		for (j=1; j<=i; j++)
		{ 
			printf("%d ", num);
			num = num + 1;
		}
		printf("\n");
	}
}
