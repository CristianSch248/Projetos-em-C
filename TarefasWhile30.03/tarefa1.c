#include<stdio.h>

int main (void){

    int i, n;
    i = 0;

    printf("digite -999 quando terminar de por os numeros: \n");

    while ( n != -999)
    {
        printf("digite um numero: \n");
        scanf("%d", &n);

        if ( n %2 != 0){
        i++;
        }
    }
    printf("foram inseridos %d numeros impares", i - 1);
}
