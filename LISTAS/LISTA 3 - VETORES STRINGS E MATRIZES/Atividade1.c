/*Crie um programa em linguagem C que receba dois vetores de três coordenadas cada ~u = (u1; u2; u3)
e ~v = (v1; v2; v3). O programa deve calcular a soma dos vetores da seguinte forma ~r = ~u + ~v =
(u1 + v1; u2 + v2; u3 + v3). Ao final, o programa deve imprimir qual é o vetor resultante (~r) da soma
dos dois vetores recebidos.*/

#include <stdio.h>

int main()
{

    float cord[3], cord2[3], r[3];
    int i;

    printf("Digite as coordenadas de ~u: ");
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &cord[i]);
    }

    printf("Digite as coordenadas de ~v: ");
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &cord2[i]);
    }

    for (i = 0; i < 3; i++)
    {
        r[i] = cord[i] + cord2[i];
    }
    printf("O vetor resultante ~r é: (");
    for (i = 0; i < 3; i++)
    {
        printf("%.2f", r[i]);
        if (i < 2)
        {
            printf(", ");
        }
    }
    printf(")\n");

    return 0;
}