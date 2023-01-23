#include<stdio.h>
int main(void){
	int venda[3][12];
	int l, c, mes =1, venda_produto_1, venda_produto_2, venda_produto_3, venda_mensal;
	
	for(l=0;l<3;l++)
	{
		for(c=0;c<12;c++)
		{
			if(l == 0)
			{
				printf("informe o preco do prego no mes %d: "mes);
				scanf("%d", &venda[l][c]);
				mes++;
			}
			else if(l == 1)
			{
				printf("informe o preco do porca no mes %d: " mes);
				scanf("%d", &venda[l][c]);
				mes++;
			}
			else if(l == 2)
			{
				printf("informe o preco do parafuso no mes %d: " mes);
				scanf("%d", &venda[l][c]);
				mes++;
			}
		}
		mes=1;
	}
	
	l = 0;
	
	for(c=0;c<12;c++)
	{
		venda_produto_1 = venda_produto_1 + venda[l][c];
	}
	
	printf("o total de vendas de pregos foi de %d \n", venda_produto_1);
	
	l = 1;
	
	for(c=0;c<12;c++)
	{
		venda_produto_2 = venda_produto_2 + venda[l][c];
	}
	
	printf("o total de vendas de porcas foi de %d \n", venda_produto_2);
	
	l = 2;
	
	for(c=0;c<12;c++)
	{
		venda_produto_3 = venda_produto_3 + venda[l][c];
	}
	
	printf("o total de vendas de pregos foi de %d \n", venda_produto_3);
	
	l=0;
	
	for(c=0;c<12;c++)
	{
		for(l=0;l<3;l++)
		{
			venda_mensal = venda_mensal + venda[l][c];
		}
		printf("a venda mensal foi de %d \n", venda_mensal);
		venda_mensal = 0;
	}	
}
