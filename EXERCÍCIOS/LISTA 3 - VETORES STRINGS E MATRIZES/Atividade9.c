/*Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar 15
números inteiros. Após receber os números, o programa deve armazená-los numa matriz de 3x5 posi-
ções. Ao final, o programa deve imprimir na tela a matriz com 3 linhas e 5 colunas contendo os valores
digitados pelo usuário.*/

#include <stdio.h>

int main()
{

    int n[3][5], i, j;

    printf("Digite 15 numeros inteiros:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {

            scanf("%d", &n[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", n[i][j]);
        }
        printf("\n");
    }

    return 0;
}