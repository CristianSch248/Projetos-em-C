//3. Fa�a um algoritmo para que um usu�rio adivinhe um n�mero informado por outro. Inicialmente
//um usu�rio fornece um n�mero para o algoritmo, e depois o outro usu�rio deve informar n�meros
//at� acertar (obviamente o segundo usu�rio n�o tem acesso a qual n�mero foi digitado pelo primeiro
//usu�rio). Para ajud�-lo a descobrir, a cada tentativa o computador deve exibir uma mensagem do
//tipo �O n�mero � menor� quando o n�mero do segundo usu�rio for maior que o do primeiro e uma
//mensagem do tipo �O n�mero � maior� quando o segundo usu�rio digitar um n�mero menor. Ao
//acertar, o programa de mostrar uma mensagem apropriada e tamb�m mostrar o n�mero de tentativas
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
            printf("parabens voc� acertou\n");
        }
        i++;
    }while(numero2 != numero1 );

    printf("%d tentativas\n", i);
}

















