/*Utilizando o código chamado maior.c mostrado a seguir. Termine de escrever a função imprimeMaior.
Com a função corretamente terminada, o programa emlinguagem C deverá receber dois valores inteiros e
passá-los como parâmetro para a função imprime-Maior. A função deve então avaliar qual dos dois números 
é o maior e imprimir na tela apenas o maior deles.*/

#include <stdio.h>
#include <stdlib.h>

void imprimeMaior(int a, int b){
 if(a<b){
        printf("%d eh maior que %d", b, a);
    }

    if(a>b){
        printf("%d eh maior que %d", a, b);
    }

    if ( a==b ){
        printf("nao da pra saber qual numero eh maior que qual se eles sao o mesmo ne porra");
    }
}

int main(){
  int x, y;

  printf("Digite um numero inteiro: ");
  scanf("%d", &x);

  printf("Digite outro numero inteiro: ");
  scanf("%d", &y);

  imprimeMaior(x, y);

  return 0;
}