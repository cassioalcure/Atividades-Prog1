/*Crie um programa em linguagem C, utilizando o comando for, que imprima uma mensagem pedindo
para o usuário digitar um número inteiro. O programa deve imprimir todos os números inteiros de 1
até o número informado pelo usuário contando de 3 em 3, quando terminar de imprimir os números o
programa deve terminar.*/

#include <stdio.h>

int main(){

     int n1, i;
    printf("Escolha um numero inteiro: ");
    scanf("%d", &n1);

    for(i=1;i<n1;i+=3){
        printf("%d\n", i);
    }
    if (n1<=1){
        printf("Escolha um numero maior que 1.");
    }
    return 0;
}