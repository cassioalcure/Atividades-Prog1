/*Crie um programa em linguagem C que receba dois números inteiros, calcule o produto destes números
e imprima o resultado na tela.*/
#include <stdio.h>

int main (){

    int n1, n2, produto;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &n2);

    produto=n1*n2;

    printf("O produto de %d e %d eh: %d", n1, n2, produto);

    return 0;

}