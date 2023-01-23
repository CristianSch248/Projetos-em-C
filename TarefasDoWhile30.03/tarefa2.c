#include<stdio.h>
int main(void)
{
    int i=0, n=0, num=0;
    float media;

    do{
        printf("informe um numero:\n");
        scanf("%d", &n);

        num = num +n;

        i++;
    }while(n > 0);

    i = i-1;

    printf("%d\n", num);
    printf("%.2f\n", media = num/i);
    printf("%d\n", i);
}
