/*Crie um programa em linguagem C que receba um número inteiro e imprima na tela se ele é par ou
ímpar.*/
#include <stdio.h>

int main()
{

    int n1;
    
    printf("Escolha um numero inteiro: ");
    scanf("%d", &n1);

    if (n1 % 2 == 0)
    {

        printf("%d eh par", n1);
    }
    else
        printf("%d eh impar", n1);

    return 0;
}