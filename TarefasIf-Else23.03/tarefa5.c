#include<stdio.h>

    int main(void){

    int valor;

    printf("informe um valor: \n");
    scanf("%d", &valor);

    if(valor%2 == 0 && valor%3 == 0){
        printf("o numero e PAR e divisivel por TRES");
    }else{
        printf(" TALVES NAO SEJA PAR OU NAO SEJA DEVISIVEL POR 3");
    }
    }
