#include <stdio.h>

int main (void){

    int valor;

    printf("informe um valor: \n");
    scanf("%d", &valor);

    if(valor%7 == 0){
        printf("o numero e divisivel por 7");
    }else{
        printf("o numero nao e divisivel por 7");

    }



}
