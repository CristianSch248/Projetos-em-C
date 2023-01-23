#include<stdio.h>
int main (void)
{
    int i=0, N, NMA=0, NME=9999;

    do
    {
        printf("informe um numero:\n");
        scanf("%d", &N);

        if(N>NMA)
        {
            NMA=N;
        }
        else if(N > 0 && N<NME && N<NMA)
        {
            NME=N;
        }
    }while(N>0);

    printf("o maior numero eh %d\n", NMA);
    printf("O menor numero eh %d\n", NME);
}
