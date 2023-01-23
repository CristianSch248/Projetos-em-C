#include<stdio.h>

int main (void)
{
    float val[10];
    float val2[10]; //valor oficial
    int i, j, cont=0, a=0;

    for(i=0; i<10; i++) //laço de repetição que popula o vetor "val"
    {
        printf("informe o valor do livro:\n");
        scanf("%f", &val[i]);
    }
    for(i=0; i<10; i++) // esse laço testa a as casas do primeiro vetor que tem os valores repetidos
    {
        cont = 0;

        for(j=0;j<10;j++) // esse testa as casas dos vetores que não tem valoresre repetidos
        {
            if(val[i] == val2[j]) //testa para ver se tem o valor é repetido
            {
                cont++; // ele acressenta +1 quando tiver a casa repetida
            }
        }
        if(cont == 0)
        {
            val2[a] = val[i];
            a++;
        }
    }
    for(i=0; i<a; i++)
    {
        printf("%.2f ", val2[i]);
    }
}
