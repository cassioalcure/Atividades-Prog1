/*Crie um programa em linguagem C que receba dez números reais e retorne qual é a soma de todos os
números informados.*/
#include <stdio.h>

int main(){
    float n1, n2, n3, soma;

    printf("Escolha tres numeros reais para serem somados:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    soma = n1 + n2 + n3;

    printf("A soma de %f, %f e %f eh %f", n1, n2, n3, soma);

    return 0;
}