#include<stdio.h>
#include<math.h>
int main(void)
{

    float A, B, Hip, cat_A, cat_B;

    printf("informe o primeiro cateto: \n");
    scanf("%f", &A);

    printf("informe o segundo cateto: \n");
    scanf("%f", &B);

    cat_A = A * A;
    cat_B = B * B;
    Hip = cat_A + cat_B;

    printf("a hipotenusa do triangulo tem o valor de %.2f", sqrt(Hip));

}
