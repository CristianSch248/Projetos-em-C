#include<stdio.h>
int main (void){
    int numero[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("informe um numero:\n");
        scanf("%d", &numero[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("os numeros informados foram %d\n", numero[i]);
    }
}
