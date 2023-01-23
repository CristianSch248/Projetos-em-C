#include<stdio.h>

int main (void){
    int H, SEG, MIN;

    printf("indique a hora: \n");
    scanf("%d", &H);

    printf("indique os minutos: \n");
    scanf("%d", &MIN);

    printf("indique os seguntos :\n");
    scanf("%d", &SEG);

    if(H >= 0 && H <= 23 && MIN >= 0 && MIN <= 59 && SEG >= 0 && SEG <= 59 ){
        printf(" HORA VALIDA");
    }else{
        printf(" HORA INVALIDA");
    }

}
