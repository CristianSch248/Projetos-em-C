#include<stdio.h>

int main(void)
{
	float areia, empresaA, empresaB, empresaC;
	
	printf("Informe a quantidade de areia que voce precisa:");
	scanf("%d", &areia);
	
	if(areia <= 9)
	{
		empresaA = areia * 100;
		empresaB = areia * 150;
		empresaC = areia * 104;
		
		printf("o preco que voce vai pagar na empresa A eh de %.2f", empresaA);
		printf("o preco que voce vai pagar na empresa B eh de %.2f", empresaB);
		printf("o preco que voce vai pagar na empresa C eh de %.2f", empresaC);
	}
	
	else if(areia >= 10)
	{
		empresaA = areia * 100;
		empresaB = areia * 102;
		empresaC = areia * 104;
		
		printf("o preco que voce vai pagar na empresa A eh de %.2f", empresaA);
		printf("o preco que voce vai pagar na empresa B eh de %.2f", empresaB);
		printf("o preco que voce vai pagar na empresa C eh de %.2f", empresaC);	
	}
	else if(areia > 15)
	{
		empresaB = areia * 102;
		empresaC = areia * 104;
		
		printf("o preco que voce vai pagar na empresa B eh de %.2f", empresaB);
		printf("o preco que voce vai pagar na empresa C eh de %.2f", empresaC);
	}
}
