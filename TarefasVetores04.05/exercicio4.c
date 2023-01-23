#include<stdio.h>
int main (void)
{
    int A[15];
    int B[15];
    int i;

    for(i=0; i<15; i++)
    {
        printf("informe um numero:\n");
        scanf("%d", &A[i]);
    }
    for(i=0; i<15; i++)
    {
        B[i] = A[i] * A[i];
    }
    for(i=0; i<15; i++)
    {
        printf("o quadrado do numero %d eh %d\n", A[i], B[i]);
    }
}
