#include<stdio.h>
int main(void)
{
    int A[15];
    int B[15];
    int i, fat, num, n;

    for(i=0; i<15; i++)
    {
        printf("informe um numero:\n");
        scanf("%d", &A[i]);
    }
    for(i=0; i<15; i++)
    {
        fat = 1;
        n = A[i];
        while(n>0)
        {
            fat*=n;     //fetorial = fatorial*n
            n--;
        }
        B[i] = fat;
    }
    for(i=0; i<15; i++)
    {
         printf("%d ", A[i]);
    }
     printf("\n")
    for(i=0; i<15; i++)
    {
        printf("%d ", B[i]);
    }

}
