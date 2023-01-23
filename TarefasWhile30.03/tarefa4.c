#include<stdio.h>
int main(void)
{
    int i = 0, n, fat = 1;

    printf("informe um numero:\n");
    scanf("%d", &n);

    i = n;
    while(i != 1)
    {
        if(n > 0)
        {
            fat = fat * i;
        }
        i--;
    }
    printf("o fatorial eh %d", fat);
}
