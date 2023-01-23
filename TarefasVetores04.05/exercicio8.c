#include<stdio.h>
int main (void)
{
    int A[5];
    int B[5];
    int i, num;
    int y = 0;

    for(i=0; i<5; i++)
    {
        printf("informe um numero:\n");
        scanf("%d", &A[i]);
    }
    for (i=0; i<5; i++)
    {
        num=0;
        B[i] = num;

        while(num <= A[i])
        {
            B[i] = B[i] + num;
            num++;
        }
    }
    for(i=0; i<5; i++)
    {
        printf("%d\n", A[i]);
    }
    printf("\n");
    for(i=0; i<5; i++)
    {
        printf("%d\n", B[i]);
    }
}
