#include<stdio.h>
int main (void)
{
    int V, i = 0;
    float media;
        while(i<10)
        {
            printf("informe numero:\n");
            scanf("%d", &V);
            if (V > 0)
            {
            media = media + V;
            i++;
            }else{
            printf("%d numero invalido\n", V);
            }
        }
        media /10;
        printf("a media eh %.2f", media);
}
