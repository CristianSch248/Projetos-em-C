//3. Faça um algoritmo para que um usuário adivinhe um número informado por outro. Inicialmente
//um usuário fornece um número para o algoritmo, e depois o outro usuário deve informar números
//até acertar (obviamente o segundo usuário não tem acesso a qual número foi digitado pelo primeiro
//usuário). Para ajudá-lo a descobrir, a cada tentativa o computador deve exibir uma mensagem do
//tipo “O número é menor” quando o número do segundo usuário for maior que o do primeiro e uma
//mensagem do tipo “O número é maior” quando o segundo usuário digitar um número menor. Ao
//acertar, o programa de mostrar uma mensagem apropriada e também mostrar o número de tentativas
//utilizadas.

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i=0, numero1, numero2;

    printf("informe um numero:\n");
    scanf("%d", &numero1);

    system("cls");

    do{
        printf("informe um numero:\n");
        scanf("%d", &numero2);

        if(numero2 < numero1)
        {
            printf("numero maior!\n");
        }
        else if(numero2 > numero1)
        {
            printf("numero menor!\n");
        }
        else if(numero2 == numero1)
        {
            printf("parabens você acertou\n");
        }
        i++;
    }while(numero2 != numero1 );

    printf("%d tentativas\n", i);
}

















