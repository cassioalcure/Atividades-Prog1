/*Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar dois
números inteiros positivos, denominados N e M. O programa deve imprimir na tela uma matriz com N
linha e M colunas. Todos os elementos da diagonal principal (elemento onde o índice da linha é igual
ao índice da coluna, devem ser igual a 1 e todos os demais elementos devem ser iguais a zero. Após
imprimir a matriz o programa deve terminar..*/

#include <stdio.h>

int main()
{

    int M = 0, N = 0;
    int i, j;

    printf("Digite um valor para M: ");
    scanf("%d,", &M);
    printf("Digite um valor para N: ");
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (i == j)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}