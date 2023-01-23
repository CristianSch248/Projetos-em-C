#include<stdio.h>

int main (void){

   float temperatura;

    printf("informe a temperatura: \n");
      scanf("%f", &temperatura);

    if(temperatura > 36.5){
        printf("com febre");
    }else{
         printf("sem febre");
        }
}
