#include<stdio.h>
int main (void)
{
    int A[6];
    int B[6];
    int C[6];
    int D[6];
    int i=0, par=0, impar=0;

    printf("voce vai informar 3 valores agora\n");
    for(i=0; i<6; i++)
    {
        printf("informe um numero:\n");
        scanf("%d", &A[i]);
    }
    printf("agora voce vai infomar mais 3 valores\n");
    for(i=0; i<6; i++)
    {
        printf("informe um numero:\n");
        scanf("%d", &B[i]);
    }
    for(i=0; i<6; i++)
    {
        if(i%2 == 0)
        {
            D[par] = A[i];
            D[par+1] = B[i];
            par = par+2;
        }
        else
        {
            C[impar] = A[i];
            C[impar+1] = B[i];
            impar = impar+2;
        }
    }
    for(i=0; i<6; i++)
    {
        printf("%d\n", C[i]);
    }

    printf("\n");

    for(i=0; i<6; i++)
    {
        printf("%d\n", D[i]);
    }
}
