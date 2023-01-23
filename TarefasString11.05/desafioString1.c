#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void){

    char bin[9], aux;
    int i=0, j=0, decimal=0, tam;
    
	printf("entre com o binario: \n");
    fgets(bin,9,stdin);

    tam = strlen(bin) - 1;

    for(i=tam ; i>tam/2; i--){
        aux = bin[i];
        bin[i] = bin[j];
        bin[j] = aux;
        j++;
    }

    for(i=0; i<9; i++){
        if(bin[i] == '1'){
            decimal = decimal + (1*pow(2,i));
        }
    }

    printf("decimal:%d\n", decimal);

}
