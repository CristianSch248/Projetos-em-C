#include<stdio.h>
int main (void){
int idade, tcont;

printf("informe a idade: \n");
scanf("%d", &idade);

printf("informe o tempo de contribuicao: \n");
scanf("%d", &tcont);

if(idade >65 || tcont > 30)
{
    printf("pode se aposentar");
}
else if (idade >= 60 && tcont >= 25)
{
    printf("pode se aposentar");
}
else
{
    printf("nao pode se aposentar");
}




}
