#include<stdio.h>
int main(void)
{
    int kml, km, l;

    printf("distancia percorrida:\n");
    scanf("%d", &km);

    printf("quantidade de combustivel:\n");
    scanf("%d", &l);

    kml = km/l;

          if(kml < 8)
    {
        printf("venda o carro!");
    }
    else if (kml >= 8 && kml <= 14)
    {
        printf("economico!");
    }
    else if (kml > 14)
    {
        printf("super economico!");
    }
}
