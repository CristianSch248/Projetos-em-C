#include<stdio.h>

int main(void)
{
	float largura, comprimento, altura, janelas, portas, total;
	int Np, Nj;

	printf("informe a largura da cozinha:\n");
	scand("%f", &largura);
	
	printf("informe o comprimento da cozinha:\n");
	scanf("%f", &comprimento);
		
	printf("informe a altura do comodo:\n");
	scanf("%f", &altura);	
	
	printf("informe o numero de portas:\n");
	scanf("%d", &Np);
	
	printf("informe o numero de janelas:\n");
	scanf("%d", &Nj);
	
	portas = Np * 1.785;
	
	janelas = Nj * 2.00;
	
	largura = (largura * altura) *2;
	
	comprimento = (comprimento * altura)*2;
	
	total = largura + comprimento;

	total = total - portas;
	
	total = total - janelas;
	
	total = total/1.5;
	
	printf("o total de azulejos eh de %.2f", total);	
	
}
