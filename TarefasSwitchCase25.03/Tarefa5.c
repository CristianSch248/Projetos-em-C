#include <stdio.h>

int main (void){

    float nota1, nota2, nota3, media1, media2;
    int ME;
    printf("informe a nota1: \n");
    scanf("%f", &nota1);

    printf("informe a nota2: \n");
    scanf("%f", &nota2);

    printf("informe a nota3: \n");
    scanf("%f", &nota3);

    printf("1. media aritmética \n2. media ponderada \n");
    printf("informe qual media voce quer: \n");
    scanf("%d", &ME);


    switch (ME){
    case 1: {
        media1 = (nota1 + nota2 + nota3) / 3;
        printf("(%.2f + %.2f + %.2f) / 3 = %.2f", nota1, nota2, nota3, media1);
        break;
        }
    case 2: {
        media2 = (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10;
        printf("(%.2f * 3 + %.2f * 3 + %.2f * 4) / 10 = %.2f", nota1, nota2, nota3, media2);
        break;
    }
    default: {
        printf("ERRO!");
        break;
        }
    }
}
