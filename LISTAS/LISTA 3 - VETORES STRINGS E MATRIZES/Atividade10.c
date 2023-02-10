/*Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar 9 nú-
meros inteiros. Após receber os números, o programa deve armazená-los numa matriz de 3x3 posições.
Ao final, o programa deve imprimir na tela a soma dos elementos da diagonal principal (1º, 5º e 9º)*/

#include <stdio.h>

int main()
{

    int matriz[3][3], i, j, soma;

    printf("Digite 9 numeros inteiros:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Matriz:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        soma += matriz[i][i];
    }

    printf("A soma da diagonal principal é: %d\n", soma);

    return 0;
}