#include<stdio.h>
#include<math.h>
int main (void){
    int peso;
    float altura, IMC;

    printf("Seu peso: \n");
    scanf("%d", &peso);

    printf("Sua altura: \n");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);
    printf("%d / %f = %.2f", peso, altura, IMC);

    if (IMC > 0 && IMC <= 18.5){
        printf(" ABAIXO DO PESO");
    }else if (IMC >=18.5 && IMC <= 25){
        printf(" NORMAL");
    }else if (IMC >= 25 && IMC <= 30){
        printf(" PRE-OBESO");
    }else if (IMC >= 30 && IMC <= 35){
        printf(" OBESO CLASSE 1");
    }else if (IMC >= 35 && IMC <= 40){
        printf(" OBESO CLASSE 2");
    }else if (IMC >=40){
        printf(" OBESO CLASSE 3");
    }
}
