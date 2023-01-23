#include <stdio.h>
int main (void)
{
    int a, b, c, soma1, soma2, soma3;

    printf("informe um valor para A:\n");
    scanf("%d", &a);

    printf("informe um valor para B:\n");
    scanf("%d", &b);

    printf("informe um valor para C:\n");
    scanf("%d", &c);

    soma1 = a + b;

    soma2 = b + c;

    soma3 = c + a;

    if(soma1 < c)
    {
        printf("não é triangulo");
    }
    else if(soma2 < a)
    {
        printf("não é triangulo");
    }
    else if(soma3 < b)
    {
        printf("não é triangulo");
    }
    else if(a == b && b == c)
    {
        printf("equilatero");
    }
    else if(a == b || b == c || c == a)
    {
        printf("isosceles");
    }
    else if (a != b || b != c || c != a)
    {
        printf("escaleno");
    }






}
