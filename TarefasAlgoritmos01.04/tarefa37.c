#include<stdio.h>
int main(void)
{
    int i=0;
    float s, d1=1, d2=1;

    for(i=1; i <= 50 && d2<= 99; i++)
    {
        s = s + d2/d1;

        d1=d1 +1;
        d2 = d2 +2;

        printf("%.2f\n", s);
    }
}
