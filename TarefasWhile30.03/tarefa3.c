#include<stdio.h>
int main(void)
{
    int i=0, num = 1001, numero;

    while(num > 1000 && num < 1999)
    {
        if(num%11 == 5)
        {
            numero = num;
            printf("%d\n", numero);
        }
        num++;
        }
}
