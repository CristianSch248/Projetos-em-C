#include <stdio.h>

int main (void) {

	int a, b, i=0, divs=1, rest, soma=0;

	printf("Informe um valor:\n");
	scanf("%d", &a); 
	
	printf("agora informe outro valor:\n");
	scanf("%d", &b);
	
	for(i = a; i<=b; i++){
		divs = 1; 
	    rest = 0; 
		 do{ 

			if(i % divs == 0) 
			{ 
				rest = rest+1; 
			}

			divs=divs+1; 
		
		} while(divs<=i); 
		if (rest == 2) 
		{ 
			soma = soma + i;
		}
	}
	printf("A soma de todos os primos entre\n%d\n", a);
	printf("e %d\n", b);
	printf("eh igual a %d\n",soma);
}
