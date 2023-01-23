#include <stdio.h>

int main(void){

    float nota1, nota2, media;

    printf("informe a sua nota1: \n");
    scanf("%f", &nota1);

    printf("informe a sua nota2: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) /2;
    printf("%f + %f = %.2f \n", nota1, nota2, media);

    if(media >= 7.0){
        printf("PARABENS voce foi APROVADO");
    }else{
        printf("voce foi REPROVADO");
    }

}
