#include <stdio.h>
#include <string.h>
void erros(int erros){

    switch(erros)
	{
        case 1:
                printf("Erro1: Cabeça \n");
                break;
        case 2:
                printf("Erro1: Cabeça \n");
                printf("Erro2: Troco \n");
                break;

        case 3:
                printf("Erro1: Cabeça \n");
                printf("Erro2: Troco \n");
                printf("Erro3: Perna direira \n");
                break;

        case 4:
                printf("Erro1: Cabeça \n");
                printf("Erro2: Troco \n");
                printf("Erro3: Perna direira \n");
                printf("Erro4: Perna esquerda \n");
                break;

        case 5:
                printf("Erro1: Cabeça \n");
                printf("Erro2: Troco \n");
                printf("Erro3: Perna direira \n");
                printf("Erro4: Perna esquerda \n");
                printf("Erro5: Braço direito \n");
                break;

        case 6:
                printf("Erro1: Cabeça \n");
                printf("Erro2: Troco \n");
                printf("Erro3: Perna direira \n");
                printf("Erro4: Perna esquerda \n");
                printf("Erro5: Braço direito \n");
                printf("Erro6: Braço esquerdo \n");
                break;
	}

}


int main(void) {
    char palavra[50], pontinhos[50];
    char letra;
    int i, erro = 0, contador;

    printf("informe uma palavra: ");
    fgets(palavra,50,stdin);



    for (i = 0; i < strlen(palavra); i++) {
        pontinhos[i] = '_';
    }


    while (erro < 7) {
        system("clear");
        contador = 0;
        printf("\n\n");

        for (i = 0; i < strlen(palavra); i++) {
            printf("%c ", pontinhos[i]);
        }

        printf("\n\n");
        erros(erro);
        printf("\n\n");

        printf("Informe uma Letra: \n");
        scanf("%c", &letra);
        setbuf(stdin, NULL);

        for (i = 0; i < strlen(palavra); i++) {
            if (letra == palavra[i]) {
                pontinhos[i] = palavra[i];
            } else{
                contador++;
            }
        }

        if(contador == strlen(palavra)){
            erro++;
        }

        if(strcmp(palavra,pontinhos) == 0){
            erro = 100;
        }

    }

    if(erro == 100){
        printf("Parabens, voce ganhou \n");
    } else{
      printf("game over \n");
    }

    getchar();

}
