#include <stdio.h>
    int main (void){

    int mes;

    printf("informe um numero correspondente a algum mes: \n");
    scanf("%d", &mes);

    switch(mes)
    {
        case 1: {
                printf("JANEIRO, a temporada esta em andamento! \n");
                break;
        }
        case 2: {
                printf("FEVEREIRO, a temporada esta em andamento! \n");
                break;
        }
        case 3: {
                printf("MARCO, a temporada esta em andamento! \n");
                break;
        }
        case 4: {
                printf("ABRIL, a temporada esta em andamento! \n");
                break;
        }
        case 5: {
                printf("MAIO, a temporada esta em andamento! \n");
                break;
        }
        case 6: {
                printf("JUNHO, a temporada esta em andamento! \n");
                break;
        }
        case 7: {
                printf("JULHO, a temporada acabou e so voltara em NOVEMBRO! \n");
                break;
        }
        case 8: {
                printf("AGOSTO, a temporada acabou e so voltara em NOVEMBRO! \n");
                break;
        }
        case 9: {
                printf("SETEMBRO, a temporada acabou e so voltara em NOVEMBRO! \n");
                break;
        }
        case 10: {
                printf("OUTUBRO, a temporada acabou e voltara mes que vem! \n");
                break;
        }
        case 11: {
                printf("NOVEMBRO, a temporada comecou! \n");
                break;
        }
        case 12: {
                printf("DEZEMBRO, a temporada esta em andamento! \n");
                break;
        }
        default:{
                printf("mes invalido! \n");
        }
    }
}

