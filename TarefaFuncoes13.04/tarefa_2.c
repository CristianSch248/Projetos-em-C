#include<stdio.h>
void primo (int n)
{
  int i, resultado = 0, num=n;//guarda as variaveis
  if (num < 0)
    {
      printf ("numero invalido");// diz se o numero é invalido
    }
  else
    {
      for (i = 1; i <= num; i++)    //executa até o numero que o usuario informou em MAIN
	{
	  if (num % i == 0)     //testa se o numero é primo
	    {
	      resultado++;  //se o resto da divisão for ZERO ele acressenta mais 2 ao contador
	    }
	}

      if (resultado == 2)   //ele testa se o contador é igual a 2
	printf ("%d eh um numero primo\n", num);
      else  // se não for ele conta como negativo
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
