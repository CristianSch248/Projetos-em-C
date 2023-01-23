#include<stdio.h>

int main (void){
    char letra;

    printf("insira uma letra: \n");
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'e'|| letra == 'i' || letra == 'o' || letra == 'u'){
        printf("esta letra e uma vogal");
    }else{
        printf("esta letra nao e uma vogal");
    }
}
