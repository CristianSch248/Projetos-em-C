#include <stdio.h>

int main (void){

    int valor;
     printf("informe um valor: \n");
     scanf("%d", &valor);

     if (valor < 0){
        printf(" NEGATIVO");
     }else if (valor == 0){
        printf(" IGUAL A ZERO");
     }else if (valor > 0 && valor%2 == 0){
        printf(" POSITIVO e PAR");
     }else if (valor > 0 && valor%2 != 0){
        printf(" POSITIVO e IMPAR");
     }
}
