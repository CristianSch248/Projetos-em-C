#include<stdio.h>
#include<math.h>
int potencia(int a, int b)
{
    int r;
    r = pow(a,b);
    printf("o resultado da potencia eh %d", r);
}
main()
{
    int a, b, res;
    printf("informe a base do calculo:\n");
    scanf("%d", &a);
    printf("informe o expoente do calculo:\n");
    scanf("%d", &b);
    res = potencia(a,b);
}
