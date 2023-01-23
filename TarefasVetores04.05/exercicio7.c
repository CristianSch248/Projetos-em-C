#include<stdio.h>
int main(void)
{
    int A[5];
    int B[8];
    int C[13];
    int i;

    printf("digite 5 valores\n");

    for(i=0; i<5; i++)
    {
        printf("informe um numero:\n");
        scanf("%d", &A[i]);
    }
    printf("agora digite mais 8 valores\n");
    for(i=0; i<8; i++)
    {
        printf("informe um numero:\n");
        scanf("%d", &B[i]);
    }
    for(i=0; i<5; i++)
    {
        C[i] = A[i];
    }
    for(i=5; i<13; i++)
    {
        C[i] = B[i-5];
    }
    printf("os 13 valores que voce informou sao:\n");
     for(i=0; i<13; i++)
     {
         printf("%d ", C[i]);
     }
}
