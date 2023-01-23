#include <stdio.h>

int main (void){

	int n, num=2, total=1, soma=0;

	printf("Informe um numero inteiro maior que zero:\n");
	scanf("%d", &n);

	do{  
	   int div = 1;
	   int resto = 0;
		do {
				if (num % div == 0) { 
				resto++;
			}
			div++;
		} while(div<=num); 

		if (resto == 2) 
		{ 
			soma = soma + num;
			total = total+1;
		}
		num++;
	}while(total<=n);
	printf("A soma dos %d primeiros numeros primos eh %d \n", n, soma);
}
