/*Utilizando o código chamado retangulo.c mostrado a seguir. Termine de escrever a função areaRetangulo. Com a função corretamente terminada, o programa em
linguagem C deverá receber dois valores reais que representem a base e a altura de um retângulo. A
seguir deve utilizar a função areaRetangulo para calcular a área do retângulo e ao nal imprimir na
tela o valor calculado da área deste retângulo.*/
#include <stdio.h>
#include <stdlib.h>

float areaRetangulo(float b, float h){
  return b * h;
}

int main(){
  float a, b, r;
  printf("Digite o tamanho da base do retangulo: ");
  scanf("%f", &a);

  printf("Digite a altura do retangulo: ");
  scanf("%f", &b);

  r = areaRetangulo(a, b);

  printf("A area do retangulo eh %f\n", r);
  return 0;
}