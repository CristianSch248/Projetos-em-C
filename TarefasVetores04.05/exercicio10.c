#include<stdio.h>

int main(void)
{
    int a[8];
    int b[8];
    int c[16];
    int num[8];
    int i;

    for(i=0; i<8; i++)
    {
        printf("informe um numero:\n");
        scanf("%d", &num[i]);
    }

    for(i=0; i<8; i++)
    {

        if(num[i]%2 == 0)
        {
            a[i] = num;
        }
        else if(num[i]%3 == 0)
        {
            a[i] = num;
        }
        else if(num[i] %5 == 0)
        {
            b[i] = num;
        }
    }

    for(i=0; i<8; i++)
    {
        c[i] = a[i];
    }
    for(i=0; i<8; i++)
    {
        c[i] = b[i];
    }
    for(i=0; i<16; i++)
    {
        printf("%d ", c[i]);
    }

}
