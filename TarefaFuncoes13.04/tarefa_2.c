#include<stdio.h>
void primo (int n)
{
  int i, resultado = 0, num=n;//guarda as variaveis
  if (num < 0)
    {
      printf ("numero invalido");// diz se o numero � invalido
    }
  else
    {
      for (i = 1; i <= num; i++)    //executa at� o numero que o usuario informou em MAIN
	{
	  if (num % i == 0)     //testa se o numero � primo
	    {
	      resultado++;  //se o resto da divis�o for ZERO ele acressenta mais 2 ao contador
	    }
	}

      if (resultado == 2)   //ele testa se o contador � igual a 2
	printf ("%d eh um numero primo\n", num);
      else  // se n�o for ele conta como negativo
	printf ("%d nao e um numero primo\n", num);
    }
}
int main ()
{
  int n;
  printf ("informe um numero:\n");
  scanf ("%d", &n);
  primo (n);
}
