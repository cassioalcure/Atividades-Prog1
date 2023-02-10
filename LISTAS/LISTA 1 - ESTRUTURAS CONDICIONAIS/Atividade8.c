/*Crie um programa em linguagem C que receba dois números inteiros e imprima na tela qual é o maior
deles.*/
#include <stdio.h>

int main(){

    int n1, n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    if(n1<n2){
        printf("%d eh maior que %d", n2, n1);
    }

    if(n1>n2){
        printf("%d eh maior que %d", n1, n2);
    }

    if ( n1==n2 ){
        printf("nao da pra saber qual numero eh maior que qual se eles sao o mesmo ne porra");
    }
    return 0;
}