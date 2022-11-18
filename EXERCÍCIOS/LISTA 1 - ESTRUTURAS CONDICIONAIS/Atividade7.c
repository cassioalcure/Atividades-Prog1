/*Crie um programa em linguagem C que receba um número inteiro e imprima na tela se ele é múltiplo
de 7 ou não.*/
#include <stdio.h>

int main()
{
    int n1;
    printf("Digite um numero: ");
    scanf("%d", &n1);

    if (n1 % 7 == 0)
    {
        printf("%d eh multiplo de 7", n1);
    }
    else
        printf("%d nao eh multiplo de 7", n1);
    return 0;
}