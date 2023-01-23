#include <stdio.h>

int main (void)
{
    int i=1, n=2, cont=0, primo, num;

    printf("informe quantos numeros primos voce quer:\n");
    scanf("%d", &num);

    do{

        primo = 0;

        do{

            if(n%i == 0)
            {
                primo++;
            }

            i++;

        }while(n >= i);

             if(primo == 2)
                {
                    printf("%d \n", n);
                    cont++;
                }

        n++;
        i = 1;

        }while(cont < num);
}
