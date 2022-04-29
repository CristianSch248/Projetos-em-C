#include <stdio.h>
#include <string.h>

struct filme {
    int idfilme;
    char nome[60];
    char categoria[30];
    int copias;
    int qtdlocado;
    int histlocatario[100];
};

struct cliente {
    int idcliente;
    char nome[60];
    char endereco[30];
    char telefone[10];
    char email[30];
    int histlocacao[100];
    int filmesalugados[3];
};

int main(void)
{	
	int i, aux, aux1, aux2, tam;	
    int cont_filme, cont_cliente, cod, codcli;
    int menu, menusec;
    struct filme cartela[50];
    struct cliente pessoas[50];
 
 printf("Bem vindo à locadora de filmes VHS!\n"); 
 
 do{    
     	printf("Selecione uma das opções à seguir:\n");
     	printf("1-Filmes\n2-Clientes\n3-Locar filme\n4-Devolver filme\n5-Sair\n");
     	scanf("%d", &menu);
     
        switch(menu){
            case 1:{//bloco dos filmes
                printf("Escolha uma das opções à seguir\n");
                printf("1.Listagem\n2.Cadastro\n3.Exclusão\n4.Histórico\n5.Voltar\n");
                scanf("%d", &menusec);
                
                switch(menusec){
                    case 1:{ //aqui lista os filmes
                             printf("Lista de filmes\n");
                                for (i=0;i<cont_filme;i++)
								{ 
                                	if (cartela[i].idfilme != 999)
									{ //aqui testa os filmes alugados pelo cliente, para cada cliente, exceto os excluídos (999)
                                    	printf("ID: %d Nome: ", cartela[i].idfilme); //aqui mostra o ID e o nome do filme
                                    	puts(cartela[i].nome);
                                	}
                                }    
                        break;
                    }
                    case 2: { //aqui cadastra os filmes
                        printf("Fazer cadastro de filme\n");
                        cartela[cont_filme].idfilme = cont_filme;
                        printf("Nome do filme: ");
                        setbuf(stdin,NULL);
                        fgets(cartela[cont_filme].nome,60,stdin);
                        printf("Categoria: ");
                        setbuf(stdin,NULL);
                        fgets(cartela[cont_filme].categoria,30,stdin);
                        printf("Copias: ");
                        scanf("%d",&cartela[cont_filme].copias);
                        cartela[cont_filme].qtdlocado = 0;
                        cont_filme++;
                        printf("Filme cadastrado com sucesso!\n");
                        break;
                    }    
                    case 3: { //neste bloco exclui os filmes
                        printf("Excluir filme\n");
                        printf("Digite o ID do filme a ser excluido:\n ");
                        scanf("%d",&aux);
                        cartela[aux].idfilme = 999; //neste bloco os filmes são excluidos com id 999
                        printf("Filme excluido.\n");
                        break;    
                    }
                    case 4: { //aqui mostra o histórico de locações de filmes 
                        printf("Historico de locacoes do filme: \n");
                        printf("ID do filme: \n");
                        scanf("%d",&aux);
                        printf("Filmes alugados pelo(s) cliente(s):\n");
                        for (i=0;i<cont_cliente;i++) 
						{
                            for (tam=0;tam<100;tam++) 
							{//aqui testa todos os filmes locados por id do cliente, para todos os clientes 
                                if (pessoas[i].histlocacao[tam]==aux) 
								{ //aqui encontra o filme escolhido na listagem dos filmes locados por cliente
                                    printf("ID: %d Nome: ",pessoas[i].idcliente);//aqui informa o nome e o ID do cliente que já alugaram o filme
                                    puts(pessoas[i].nome);
                                }
                            }
                        }
                        break;
                    }
                    
                    case 5:{ //sair
                        printf("Sair\n");
                        break;
                    }
                    
                    default:{
                        printf("Opcao invalida\n");
                        break;
                    }    
                }
        		break;
        	}           
        
        	case 2:{ // bloco dos clientes
            	printf("Escolha uma das opções à seguir\n");
            	printf("1.Listagem\n2.Cadastro\n3.Exclusão\n4.Histórico\n5.Voltar\n");
            	scanf("%d", &menusec);
                
            	switch(menusec){    
                	case 1:{//aqui lista os clientes
                  		printf("Lista de clientes\n");
                    	for (i=0;i<cont_cliente;i++) 
						{
                    	    if (pessoas[i].idcliente != 999) 
							{ //aqui lista todos os clientes cadastrados exceto os excluídos (999)
                      		    printf("ID: %d Nome: ", pessoas[i].idcliente);
                            	puts(pessoas[i].nome);
                            	for (tam=0;tam<3;tam++)
								{
                                	if(pessoas[i].filmesalugados[tam]!=999) 
									{//aqui lista os filmes alugados junto com  o nome e o id de cada cliente
                                    	printf("Filmes em locacao - ID: %d Nome: ", pessoas[i].filmesalugados[tam]);
                                    	puts(cartela[pessoas[i].filmesalugados[tam]].nome);//relaciona o nome do filme com seu ID, mostrando-o
                                	}
                            	}
                        	}
                    	}
					}
                	case 2:{//bloco para cadastrar clientes
                    	printf("Fazer cadastro de cliente\n");
                    	pessoas[cont_cliente].idcliente = cont_cliente;
                    	printf("Nome: ");
                   		setbuf(stdin,NULL);
                    	fgets(pessoas[cont_cliente].nome,60,stdin);
                    	printf("Endereco: ");
                    	setbuf(stdin,NULL);
                    	fgets(pessoas[cont_cliente].endereco,30,stdin);
                    	printf("Telefone: ");
                    	setbuf(stdin,NULL);
                    	fgets(pessoas[cont_cliente].telefone,10,stdin);
                    	printf("E-mail: ");
                    	setbuf(stdin,NULL);
                    	fgets(pessoas[cont_cliente].email,30,stdin);
                    	setbuf(stdin,NULL);
                    	getc(stdin);
                        for (i=0;i<100;i++) 
						{
                            pessoas[cont_cliente].histlocacao[i] = 999;//aqui zera o histórico de locação
                        }
                        for (cont=0;cont<3;cont++)
						{
                            pessoas[cont_cliente].filmesalugados[i] = 999;//aqui zera os filmes alugados atualmente
                        }
                        cont_cliente++;
                    	printf("Cliente cadastrado com sucesso!\n");
                    	break;
           			}
					       
                	case 3:{//aqui exclui clientes
                    	printf("Excluir cliente\n");
                    	printf("Digide o ID do cliente: \n");
                    	scanf("%d",&aux);
                    	aux2 = 0;
                    	for (i=0;i<3;i++) 
						{
                        	if (pessoas[aux].filmesalugados[i]!=999) 
							{ //mostra os filmes que estão alugados pelo cliente para a devolução antes da exclusão
                           		printf("Filme ID: %d pendente para devolucao.\n", pessoas[aux].filmesalugados[i]);
                            	aux2 = 1;
                        	}
                    	}
                    	if (aux2 == 0) 
						{ //considera o cliente como excluido caso tenha devolvido todos os filmes
                        	pessoas[aux].idcliente = 999; //clientes com id 999 sao excluidos
                        	printf("Cliente escluído!\n");
                    	}
                    	break;
            		}
			      
                	case 4:{//aqui mostra o histórico de locações
                    	printf("Historico de locacoes do cliente: \n");
                    	printf("ID do cliente: ");
                    	scanf("%d",&aux);
                    	printf("Filmes alugados pelo cliente:\n");
                    	for (i=0;i<100;i++) 
						{
                        	if ((pessoas[aux].histlocacao[i]>=0)&&(pessoas[aux].histlocacao[i]<cont_filme)) 
							{ //se o histórico de locação for maior ou igual a zero e menor que a quantidade de filmes existentes
                         	   printf("ID: %d Nome: ", cartela[i].idfilme); //informa o id e o nome do filme
                         	   puts(cartela[i].nome);
                        	}
                    	}
                    	break;
        			}
                
                	case 5:{//sair
                    	printf("Sair\n");
                    	break;
            		}
            
                	default:{
                    	printf("Opção invalida!\n");
                    	break;
            		}
            	}
            	break;
    		} 
			      
        	case 3:{ //bloco para locar os filme
            	printf("Locar filme:\n");
            	printf("Informe o ID do cliente:\n");
            	scanf("%d",&aux);
            	printf("Informe o ID do filme:\n");
            	scanf("%d",&aux1);
            	if (cartela[aux1].qtdlocado == cartela[aux1].copias)
				{//verifica se há cópias disponíveis para locação
                	printf("Nenhuma copia disponivel.\n");
            	}
            	else
				{
                	aux2 = 0;
                	for (i=0;i<3;i++) 
					{
                    	if(pessoas[aux].filmesalugados[i]==999) 
						{//este bloco testa a quantidade de filmes que o cliente está em posse
                        	pessoas[aux].filmesalugados[i]=aux1; //coloca o ID do filme na lista de filmes alugados do cliente
                        	aux2 = 1; 
                        	cartela[aux1].qtdlocado++;//diminui a quantidade de cópias do filme filme disponíveis para locação
                        	for (tam=0;tam<100;tam++)
							{
                            	if(pessoas[aux].histlocacao[tam]==999) 
								{//verifica se o cliente possui espaços disponíveis para registar o filme em seu histórico
                               		pessoas[aux].histlocacao[tam]=aux1;//adiciona o ID do filme ao seu historico
                                	break;
                            	}
                       		}
                        	break;
                    	}
                	}
                }
                if (aux2 == 0) 
				{//retorna a mensagem caso o cliente já possua 3 filmes em sua carga
                    printf("Cliente esta em posse de 3 filmes. Nao pode alugar novos.\n");
                }
            	break;
        	}
        
        	case 4:{//bloco para devoluções
            	printf("Devolver filme:\n");
            	printf("Informe o ID do cliente:\n");
            	scanf("%d",&aux);
            	printf("Informe o ID do filme:\n");
            	scanf("%d",&aux1);
            	aux2 = 0;
            	for (cont=0;cont<3;cont++)
				{
                	if(aux1 == pessoas[aux].filmesalugados[i]) 
					{//localiza o filme na lista dos filmes em posse do cliente
                    	pessoas[aux].filmesalugados[i] = 999; //retira o filme da carga do cliente
                    	cartela[aux1].qtdlocado--; //aumenta a quantidade de cópias do filme disponíveis para locação
                    	aux2 = 1;
                    	printf("Filme devolvido\n");
                    	break;
                	}
            	}
            	if (aux2 == 0) 
				{//retorna a mensagem caso não encontre o filme na posse do cliente
        			printf("Filme não consta como alugado por esse cliente.\n");
            	}
            	break;
       	 	}
        	case 5:{//sair
            	printf("Sair\n");
            	break;
        	}
        	default:{ 
            	printf("Opção invalida!\n");
            	break;
        	}
    	}
    }while(menu!=5);
}
