#include<stdio.h>

int main (void)
{
	int player1, player2;
	
	do{
		printf("escolha uma jogada para o jogador 1\n");
		printf("1 - papel \n2 - pedra \n3 - tesoura \n9 - SAIR\n");
		scanf("%d", &player1);
		printf("\n\n");
		
		printf("escolha uma jogada para o jogador 2\n");
		printf("1 - papel \n2 - pedra \n3 - tesoura \n9 - SAIR\n");
		scanf("%d", &player2);
		printf("\n\n");
		
		if(player1 == player2)
		{
			printf("EMPATE\n\n");
		}
		else if(player1 == 1 && player2 == 2)
		{
			printf("JOGADOR 1 GANHOU\n\n");
		}
		else if(player1 == 1 && player2 == 3)
		{
			printf("JOGADOR 2 GANHOU\n\n");
		}
		else if(player1 == 2 && player2 == 1)
		{
			printf("JOGADOR 2 GANHOU\n\n");
		}
		else if(player1 == 2 && player2 == 3)
		{
			printf("JOGADOR 1 GANHOU\n\n");
		}
		else if(player1 == 3 && player2 == 1)
		{
			printf("JOGADOR 2 GANHOU\n\n");
		} 
		else if(player1 == 3 && player2 == 2)
		{
			printf("JOGADOR 2 GANHOU\n\n");
		}	
	}while(player1 != 9 || player2!= 9);
}
