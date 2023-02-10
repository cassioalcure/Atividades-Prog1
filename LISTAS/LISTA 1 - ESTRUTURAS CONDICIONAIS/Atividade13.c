/*Crie um programa em linguagem C que receba três números inteiros, fora de ordem, e os imprima em
ordem crescente.*/

#include <stdio.h>

int main()
{

    int n1, n2, n3;

    printf("Digite tres numeros inteiros:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    if(n1>n2 && n1>n3){

        printf("O maior numero eh %d", n1);
    }

    else if(n2>n3 && n2>n1){

        printf("O maior numero eh %d", n2);
    }

    else if(n3>n2 && n3>n1){

        printf("O maior numero eh %d", n3);
    }

    else {
        printf("Os numeros sao iguais");
    }

    return 0;
}   