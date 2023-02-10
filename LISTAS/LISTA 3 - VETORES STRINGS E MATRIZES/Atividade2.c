/*Crie um programa em linguagem C que receba dois vetores de três coordenadas cada ~u = (u1; u2; u3)
e ~v = (v1; v2; v3). O programa deve calcular o produto vetorial dos dois vetores da seguinte forma
~r = ~u ×~v = (u2v3 − u3v2; u3v1 − u1v3; u1v2 − u2v1). Ao final, o programa deve imprimir qual é o vetor
resultante (~r) do produto vetorial dos dois vetores recebidos.*/

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

    r[0] = cord[1]*cord2[2] - cord[2]*cord2[1];
    r[1] = cord[2]*cord2[0] - cord[0]*cord2[2];
    r[2] = cord[0]*cord2[1] - cord[1]*cord2[0];

   printf("O produto vetorial de cord x cord2 = : (%.2f, %.2f, %.2f)\n", r[0], r[1], r[2]);

    return 0;
}