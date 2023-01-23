#include<stdio.h>

int main (void){
     int v1, v2, aux;

     printf("informe um valor: \n");
     scanf("%d", &v1);

     printf("informe um valor: \n");
     scanf("%d", &v2);

     if (v1 > v2){
        aux = v1;
        v1 = v2;
        v2 = aux;
        printf("%d, %d", v1, v2);
    }
     else if (v1 <v2){
        aux = v2;
        v2 = v1;
        v2 = aux;
        printf("%d, %d", v1, v2);
    }
}
