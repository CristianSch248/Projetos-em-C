#include<stdio.h>

int main (void)
{
	int op;
	float saque=0, deposito=0, saldo=0;
	
	do{
		printf("escolha uma operação \n1 - SAQUE \n2 - DEPOSITO \n9 - SAIR\n");
		scanf("%d", &op);
		
		switch(op){
			case 1: {
				printf("SAQUE\n");
					
				printf("informe o valor do saque:");
				scanf("%f", &saque);
				
				if(saldo == 0)
				{
					prontf("Seu saldo eh de 0(ZERO) reais, para fazer saques faça um deposito antes.\n");
				}
				else if(saque > saldo)
				{
					printf("CONTA ESTOURADA\n");
					printf("Saldo insuficiente para realizar o saque\n");
					printf("Saques permitidos ate %.2f\n", saldo);
				}
				else
				{
					saldo = saldo - saque;
					printf("voce retirou %.2f reais da sua conta\n", saque);
					printf("Seu saldo ainda eh de %.2f\n", saldo);
					saque = 0;
				}								
				break;
			}
			
			case 2: {
				printf("DEPOSITO\n");
				
				printf("informe a quantia que deseja depositar:");
				scanf("%f", &deposito);
				
				saldo = saldo + deposito;
				
				printf("Seu saldo eh de %.2f reais\n", saldo);
				
				deposito = 0;
				break;
			}
			
			case 9:{
				printf("SAIR\n");
				break;
			}
			
			default:{
				printf("operacao invalida\n");
				break;
			} 
		
		}
	}while(op != 9);
}
