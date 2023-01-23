#include<stdio.h>
int main (void){
    int v1[10];
    int v2[10];
    int i;

    for(i=0; i<10; i++)
    {
        printf("informe um numero:\n");
        scanf("%d", &v1[i]);
        v2[i] = v1[i] *2;
    }
    for(i=0; i<10; i++)
    {
        printf("o dobro dos valores informados eh %d\n", v2[i]);
    }


}
