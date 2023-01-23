#include<stdio.h>

int main(void)
{

    int distancia;
    float horas, vm;

    printf("distancia de viagem: ");
    scanf("%d", &distancia);

    printf("horas de viagem: ");
    scanf("%f", &horas);

    vm = distancia / horas;
    printf("%d / %f = %.2f", distancia, horas, vm);

    if(vm > 80)
    {
        printf("\n estava acima da velocidade de 80km/h");
    }
    else
    {
        printf("\n estava abaixo da velocidade de 80km/h");
    }
}
