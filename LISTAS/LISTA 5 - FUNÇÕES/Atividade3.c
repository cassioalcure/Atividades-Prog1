/*Utilizando o código chamado crescente.c mostrado a seguir. Termine de escrever a função crescDesc. Com a função corretamente terminada, o programa em
linguagem C deverá receber cinco valores inteiros e armazená-los em um vetor de cinco posições. A
seguir o programa deve percorrer o vetor e passar para a função crescDesc todos os pares de elementos
sucesivos do vetor. Para cada par de valores recebidos, a função deve avaliar os dois valores e imprimir
na tela se os valores estão em ordem crescente ou decrescente.*/

#include <stdio.h>
#include <stdlib.h>

#define N 5

void crescDesc(int a, int b){
  if(a < b)
    printf("Em ordem crescente\n");
  else if(a > b)
    printf("Em ordem decrescente\n");
  else
    printf("Não há ordem definida\n");
}

int main(){
  int i, vet[N];

  printf("Digite %d numeros inteiros\n", N);

  for(i = 0; i < N; i++) 
    scanf("%d", &vet[i]);

  for(i = 0; i < N-1; i++)
    crescDesc(vet[i], vet[i+1]);

  return 0;
}
