#include <stdio.h>

int main (void)
{
	int planeta=0;
	
	float massa=0, peso=0;
	
	printf("informe a sua massa corporal:");
	scanf("%d", &massa);
	
	fgetc(stdin);
	
	printf("A partir da sua massa corporal e das diferentes gravidades eh possivel \nter um peso aproximado em outros planetas\n");	
	printf("1 - MERCURIO\n2 - VENUS\n3 - MARTE\n4 - JUPITER\n5 - SATURNO\n6 - URANO\n");	
	printf("informe um planeta:");
	scanf("%d", &planeta);
	
	switch(planeta)
	{
		case 1:{
			printf("MERCURIO\n");
			peso = massa * 0.37;
			printf("seu peso nesse planeta eh de %.2f", peso);
			break;
		}
		case 2:{
			printf("VENUS\n");
			peso = massa * 0.88;
			printf("seu peso nesse planeta eh de %.2f", peso);
			break;
		}
		case 3:{
			printf("MARTE\n");
			peso = massa * 0.38;
			printf("seu peso nesse planeta eh de %.2f", peso);
			break;
		}
		case 4:{
			printf("JUPITER\n");
			peso = massa * 2.64;
			printf("seu peso nesse planeta eh de %.2f", peso);
			break;
		}
		case 5:{
			printf("SATURNO\n");
			peso = massa * 1.15;
			printf("seu peso nesse planeta eh de %.2f", peso);
			break;
		}
		case 6:{
			printf("URANO\n");
			peso = massa * 1.17;
			printf("seu peso nesse planeta eh de %.2f", peso);
			break;
		}
		default:{
			printf("opcao invalida");
			break;
		}	
	}
}
