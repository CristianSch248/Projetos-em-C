#include<stdio.h>
int main (void)
{
    float x[6];
    float y[6];
    int i;
    float aux;

    for(i=0; i<6; i++)
    {
        printf("informe um valor real:\n");
        scanf("%f", &x[i]);
    }
    aux = x[0];
    for(i=0; i<6; i++)
    {
        y[i] = x[i +1];
    }
    for(i=0; i<6; i++)
    {
        printf("%.2f %.2f ", x[i], y[i]);
        printf("\n");
    }
}
