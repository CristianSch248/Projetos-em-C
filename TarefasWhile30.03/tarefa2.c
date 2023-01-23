#include<stdio.h>
#include<stdlib.h>

int main (void)
{
        int i=0, sexo, m=0, f=0, total;
        float altura, mediaf=0, mediam=0, mediaT=0, maior=0, menor=3;

        while(i<10)
        {
            printf("informe sua altura:\n");
            scanf("%f", &altura);

            printf("seu sexo eh:\n1-masculino\n2-feminino:\n");
            scanf("%d", &sexo);

            if(altura < menor)
            {
                menor = altura;
            }
            else if(altura > maior)
            {
                maior = altura;
            }

            else if(sexo == 1)
            {
                m++;
                mediam = mediam + altura;
            }
            else if(sexo == 2)
            {
                f++;
                mediaf = mediaf + altura;
            }
            else
            {
                printf("ERRO");
            }
            system("cls");
            i++;
        }
        total = f + m;
        mediaT = mediaf + mediam/total;
        mediam = mediam /m;

        printf("A maior altura eh %.2f\nA menor altura eh %.2f\n", maior, menor);
        printf("a media de altura do grupo eh %.2f\n", mediaT);
        printf("a media de altura das mulheres eh %.2f\n", mediam);

}
