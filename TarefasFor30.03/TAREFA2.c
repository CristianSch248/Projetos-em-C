#include<stdio.h>
int main (void){

    float nota1, nota2, media, i;

    for(i=0; i<20; i++)
    {
    printf("informe a nota1: \n");
    scanf("%f", &nota1);

    printf("informe nota2: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("%f * %f = %.2f \n", nota1, nota2, media);
    }
}
