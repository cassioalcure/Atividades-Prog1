/*Crie um programa em linguagem C que receba duas matrizes de 3x3 posições de inteiros. O programa
deve calcular a soma das duas matrizes. Ao final, o programa deve imprimir a matriz que é o resultado
da soma das duas matrizes recebidas.*/

#include <stdio.h>

int main()
{

    int MA[3][3], MB[3][3], MC[3][3];
    int i, j;

    // Matriz A
    printf("Digite 9 numeros inteiros para a matriz A:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &MA[i][j]);
        }
    }
    // Matriz B
    printf("Digite 9 numeros inteiros para a matriz B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &MB[i][j]);
        }
    }

    // Processamento da Matriz C:
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            MC[i][j] = MA[i][j] + MB[i][j];
        }
    }

    // Imprimir Matriz A
    printf("Matriz A:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", MA[i][j]);
        }
        printf("\n");
    }

    // Imprimir Matriz B
    printf("Matriz B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", MB[i][j]);
        }
        printf("\n");
    }

    // Imprimir Matriz C
    printf("Matriz C:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", MC[i][j]);
        }
        printf("\n");
    }

    return 0;
}