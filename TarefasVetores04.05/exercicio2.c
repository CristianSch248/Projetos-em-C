#include<stdio.h>
void mult()
{
int A[11];
int i, num;

printf("informe a tabuada que deseja efetuar:\n");
scanf("%d", &num);

    for(i=0; i<11; i++)
    {
        A[i] = num * i;
    }
    for(i=0; i<11; i++)
    {
        printf("%d ", A[i]);
    }
}
void main()
{
mult();
}
