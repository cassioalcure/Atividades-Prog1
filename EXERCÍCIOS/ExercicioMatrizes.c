/*Leia do teclado duas matrizes 3 x 3 de números inteiros e escreva na tela uma terceira matriz
com os maiores dos valores de cada posição das matrizes lidas.*/
#include <stdio.h>

int main()
{

    int MA[3][3], MB[3][3], MC[3][3], i = 0, j = 0;

    printf("Escolha os numeros para colocar na matriz A:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &MA[i][j]);
        }
    }

    printf("Escolha os numeros para colocar na matriz B:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &MB[i][j]);
        }
    }
    // Print da Matriz A
    printf("Matriz A:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", MA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // Print da Matriz B
    printf("Matriz B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", MB[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // Processamento da Matriz C
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (MA[i][j] < MB[i][j])
            {
                MC[i][j] = MB[i][j];
            }
            else if (MA[i][j] > MB[i][j])
            {
                MC[i][j] = MA[i][j];
            }
            else
            {
                MC[i][j] = MA[i][j];
            }
        }
    }
    // Print da Matriz C
    printf("Matriz C:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", MC[i][j]);
        }
        printf("\n");
    }
    return 0;
}
