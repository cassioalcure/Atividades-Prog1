/*Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar dois
números inteiros positivos, denominados N e M. O programa deve imprimir na tela uma matriz com N
linha e M colunas. Todos os elementos da diagonal principal (elemento onde o índice da linha é igual
ao índice da coluna, devem ser igual a 1 e todos os demais elementos devem ser iguais a zero. Após
imprimir a matriz o programa deve terminar..*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int N,M,i,j,k;
  int **matriz;
  
  printf("\nDigite dois números inteiros positivos.\n\n");
  scanf("%d %d",&N,&M);
  
  matriz = (int**) malloc(N*sizeof(int*));
  
  for(i=0;i<N;i++){
    matriz[i] = (int*) malloc(N*sizeof(int));
    }
  
  for(i=0;i<N;i++){
    for(j=0;j<M;j++){
      if(i != j) matriz[i][j] = 0;
      if(i == j) matriz[i][j] = 1;
      }
    }
  
  printf("\n");
  for(i=0;i<N;i++){
    for(j=0;j<M;j++) printf("%d ",matriz[i][j]);
    printf("\n");
    }
  
  return 0;
}