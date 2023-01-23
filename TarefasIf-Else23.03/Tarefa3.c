#include <stdio.h>

int main(void){

    int distancia;
    float horas, VM;

    printf("distancia de viagem: \n");
    scanf("%d", &distancia);

    printf("horas de viagem: \n");
    scanf("%f", &horas);

    VM = distancia / horas;
    printf("%d / %f = %.2f \n", distancia, horas, VM);

    if( VM > 110){
        printf("FOI SUPERIOR AO LIMITE DE 110KM/H. ");
    }else{
        printf("NAO FOI SUPERIOR AO LIMITE.");

    }
}
