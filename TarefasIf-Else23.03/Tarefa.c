#include <stdio.h>

int main(void){

    int temperatura;

    printf("informe a temperatura: \n");
    scanf("%d", &temperatura);

    if(temperatura > 37.5){
        printf("esta com febre");
    }else{
        printf("nao esta com febre");
    }


}
