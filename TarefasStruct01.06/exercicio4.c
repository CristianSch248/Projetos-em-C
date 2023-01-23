#include <stdio.h>
#include <string.h>

struct carro{
	char nome[20];
	char placa[10];
	char desc[50];
	char fabricante[20];
	char cor[10];
	int ano;
	float preco; 
};

int main (void){
	
	struct carro loja[12]; 
	int op, cad=0, i=0;
	char plca[10];
	
	do{
		printf("BEM-VINDO A FASTCAR");
		printf("escolha uma opcao");
		printf("1 - cadastrar automovel\n2 - consultar automovel\n3 - gerar relatorio\n4 - SAIR\n");
		printf("opcao:");
		scanf("%d", &op);
		
		switch(op){
			
			case 1:{
				printf("CADASTRAR VEICULO\n");
				fgetc(stdin);
				
				printf("informe o nome do veiculo:");
				gets(loja[cad].nome);
				
				fgetc(stdin);
				
				printf("informe a placa do veiculo:");
				gets(loja[cad].placa);
				
				fgetc(stdin);
				
				printf("De uma descricao do veiculo:");
				gets(loja[cad].desc);
				
				fgetc(stdin);
				
				printf("Informe a fabricante do veiculo:");
				gets(loja[cad].fabricante);
				
				fgetc(stdin);
				
				printf("Informe a cor do veiculo:");
				gets(loja[cad].cor);
				
				fgetc(stdin);
				
				printf("Informe o nao do veiculo:");
				scanf("%d", &loja[cad].ano);
								
				fgetc(stdin);
				
				printf("informe o preco de venda:");
				scanf("%f", &loja[cad].preco);
				
				printf("CADASTRO REALIZADO COM SUCESSO!\n");
				
				cad++;
				break;
			}
			case 2:{
				printf("CONSULTAR AUTOMOVEL\n");
				
				fgetc(stdin);
				
				printf("informe a placa do veiculo que deseja procurar:");
				gets(plca);
				
				fgetc(stdin);
				
				for(i=0; i<12; i++)
				{
					if(plca == loja[i].placa)
					{
						puts(loja[i].nome);
						printf("%d", loja[i].ano);
						puts(loja[i].fabricante);
						puts(loja[i].desc);
						puts(loja[i].cor);
						printf("%.2f", loja[i].preco);
					}
				}
				
				printf("CONSULTA FEITA!");	
				break;
			}
			case 3:{
				printf("GERAR RELATOORIO\n");
				
				for(i=0; i<12; i++)
				{
					puts(loja[i].nome);
					printf("%d", loja[i].ano);
					puts(loja[i].fabricante);
					puts(loja[i].desc);
					puts(loja[i].cor);
					printf("%.2f", loja[i].preco);
				}	
				break;
			}
			case 4:{
				printf("SAIR!\n");
				break;
			}
			default:{
				printf("opcão invalida\n");
				break;
			}
		}
	}while(op != 4);
}
