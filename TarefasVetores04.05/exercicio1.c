#include<stdio.h>
int main(void)
{
    int A[5];
    int B[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("informe um numero:\n");
        scanf("%d", &A[i]);
    }
    for(i=0; i<5; i++)
    {
        B[i] = A[i];
    }
    for(i=0; i<5; i++)
    {
        printf("%d ", B[i]);
    }
}
