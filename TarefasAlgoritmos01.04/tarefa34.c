#include <stdio.h>
int main (void)
{
    int N, i=0;
    float nota, media, soma;
    printf("digite 000 para encerrar programa:\n");
    printf("informe quantas notas quer calcular:\n");
    scanf("%d", &N);
    if(N == 000)
    {
        exit(0);
    }
    else
    {
        for(i=0; i<N; i++)
        {
            printf("informe a nota:\n");
            scanf("%f", &nota);
            if(nota == 000)
            {
                exit(0);
            }
            else
            {
                soma = soma + nota;
            }
        }
        media = soma / N;
        if(media > 10)
        {
            printf("sua media foi %.2f PARABENS VOCE FOI APROVADO", media);
        }
        else
        {
            printf("voce NAO foi aprovado");
        }
    }
}
