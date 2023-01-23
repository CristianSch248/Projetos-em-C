#include<stdio.h>
int main (void)
{
    float vet[20];
    int i, x;

    for(i=0; i<10; i++)
    {
        printf("informe um numero:\n");
        scanf("%f", &vet[i]);

        if(i%2 == 0)
        {
            vet[i +10] = (vet[i] + (vet[i]*0.02));
        }
        else
        {
            vet[i +10] = (vet[i] + (vet[i]*0.05));
        }
    }
    for(x=0; x<20; x++)
    {
        printf("%.2f ", vet[x]);
    }

}
