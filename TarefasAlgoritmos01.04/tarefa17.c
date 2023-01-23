#include<stdio.h>
int main(void){
float salario, s20, emp;

printf("digite seu salario atual: \n");
scanf("%f", &salario);

printf("informe a prestacao do seu emprestimo: \n");
scanf("%f", &emp);

s20 = salario / 5;

if(s20 < emp)
{
    printf("emprestimo nao aceito");
}
else{
    printf("emprestimo aceito");
}





}
