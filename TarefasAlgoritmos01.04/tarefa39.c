#include<stdio.h>
int main(void)
{
    int R1, R2, A, B, i=0;
    float R;

    while(i<1)
    {
        printf("\ninforme ZERO para SAIR\n");

        printf("\ninforme um numero:\n");
        scanf("%d", &R1);

        printf("\ninforme outro numero:\n");
        scanf("%d", &R2);

        if(R1==0)
        {
            i=i+1;
        }
        else
        {
            A=R1*R2;
            B=R1+R2;
            R=A/B;
            printf("o resultado da equacao eh%.2f", R);
        }
    }
}

