/*Utilizando os códigos da série de números inteiros da mensagem codificada contida no arquivo
.dat cujo nome é o seu número de matrícula, crie o código em linguagem C que efetue o cálculo
a seguir. O valor obtido ao final das somas e o código criado para solucionar esta
questão devem ser anexado à prova.

O programa a ser criado deverá primeiramente extrair, dentre os 200 números inteiros da mensa-
gem codificada, os 10 número que formarão a sequência inicial que será utilizada para os cálculos
desta questão.
Quais serão estes 10 valores inteiros iniciais dependerá do seu número de matrícula e do conteúdo
do arquivo .dat cujo nome é seu número de matrícula. O primeiro número do arquivo sempre
fará parte da sequência inicial, porém os demais números dependerá do último dígito do seu
número de matrícula.
A partir do primeiro código, o próximo elemento da sequência será o código após k posições,
sendo k igual ao último dígito do seu número de matrícula mais dois.
Após obtida a sequência inicial de 10 números inteiros, deve-se proceder com uma sequência de
somas até restar apenas um número ao final.

Partindo-se dos 10 números iniciais deve-se somar os números adjacentes, resultando em 9 núme-
ros. De posse da sequência de nove números, deve-se novamente somar os números adjacentes,
resultando em 8 números. Este processo deve ser repetido sucessivamente até restar apenas um
número. Este último número obtido deve ser informado na prova como uma das respostas da
questão.*/

//OBS: Fiz de uma maneira que funciona com qualquer matrícula, as você precisa ter os arquivos dela (dur) ;)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char matricula[10];
  int old_n[10], n[10];
  int i, j, k = 0, p;
  int tamanho = 10;

  printf("Digite o seu numero de matricula: ");
  scanf("%s", matricula);
  strcat(matricula, ".dat");

  FILE *arquivo_entrada = fopen(matricula, "r");
  if (arquivo_entrada == NULL)
  {
    printf("Erro ao abrir o arquivo de entrada\n");
    return 1;
  }
  k = atoi(matricula);
  k = (k % 10) + 2;

  printf("O valor de k é: %d\n", k);

  for (i = 0; i < 10; i++)
  {
    fscanf(arquivo_entrada, "%d", &old_n[i]);
    j = 7 * i + 1;
    fseek(arquivo_entrada, (j - 1) * sizeof(int), SEEK_SET);
  }
  for (i = 0; i < 10; i++)
  {
    n[i] = old_n[i];
  }
  for (i = 0; i < 10; i++)
  {
    n[i] += k;
  }
  printf("\n");
  for (i = 0; i < 10; i++)
  {
    printf("%d ", n[i]);
  }
  printf("\n");
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
