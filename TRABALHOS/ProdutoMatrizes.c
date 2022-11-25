/*Trabalho de Programação I - Produto de Matrizes
UFES - SI 2022/2
Professor: Paulo Nunes
Alunos:Pedro Duque, Cássio Alcure, Estéfani Eller
*/
#include <stdio.h>

int main()
{

    float MA[3][3], MB[3][3], MC[3][3];
    int i = 0, j = 0;

    printf("Escolha os numeros para colocar na matriz A:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%f", &MA[i][j]);
        }
    }

    printf("Escolha os numeros para colocar na matriz B:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%f", &MB[i][j]);
        }
    }
    // Print da Matriz A
    printf("Matriz A:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.2f ", MA[i][j]);
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
            printf("%.2f ", MB[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Cálculo do Produto das Matrizes

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            MC[i][j] = (MA[i][0] * MB[0][j]) + (MA[i][1] * MB[1][j]) + (MA[i][2] * MB[2][j]);
        }
    }
    // Print da Matriz C
    printf("Produto das Matrizes A e B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.2f ", MC[i][j]);
        }
        printf("\n");
    }
    return 0;
}
