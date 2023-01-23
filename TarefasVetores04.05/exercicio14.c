#include<stdio.h>
int main (void)
{
    char x[10];
    int i=0;

    for(i=0; i<10; i++)
    {
        if(i%2 == 0)
        {
            x[i] = 'p';
        }
        else
        {
            x[i] = 'i';
        }
    }
    for(i=0; i<10; i++)
    {
        printf("%c ", x[i]);
    }
}

