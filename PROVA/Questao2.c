#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int old_n[10], n[10];
  int i, j, k = 7;
  int tamanho = 10;
  
  FILE *arquivo_entrada = fopen ("2022201305.dat", "r");
  if (arquivo_entrada == NULL)
    {
      printf ("Erro ao abrir o arquivo de entrada\n");
      return 1;
    }

  for (i = 0; i < 10; i++)
    {
      fscanf (arquivo_entrada, "%d", &old_n[i]);
    }
  for (i = 0; i < 10; i++)
    {
      n[i] = old_n[i];
    }
  for (i = 0; i < 10; i++)
    {
      n[i] += k;
    }
  printf ("\n");
  for (i = 0; i < 10; i++)
    {
	printf ("%d ", n[i]);
    }
  printf ("\n");
  while (tamanho > 1)
    {
      for (i = 0; i < tamanho - 1; i++)
	{
	  n[i] = n[i] + n[i + 1];
	}
      tamanho--;
      for (i = 0; i < tamanho; i++)
	{
	  printf("%d ", n[i]);
	}
      printf("\n");
    }

  return 0;
}
