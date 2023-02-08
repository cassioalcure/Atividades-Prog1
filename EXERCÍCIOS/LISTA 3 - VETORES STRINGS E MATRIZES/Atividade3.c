/*Crie um programa em linguagem C que receba dois vetores de três coordenadas cada ~u = (u1; u2; u3)
e ~v = (v1; v2; v3). O programa deve calcular o módulo de cada um dos dois vetores da seguinte forma
|~u| =√u12 + u22 + u32 e |~v| =√v12 + v22 + v32. Ao final, o programa deve imprimir quais são os
valores do módulo de cada um dos dois vetores recebidos |~u| e |~v|. Inclua a biblioteca math.h
e utilize as funções pow e sqrt para calcular respectivamente o ao quadrado e a raiz
quadrada.*/

#include <stdio.h>
#include <math.h>

int main()
{

    float u[3], v[3], r[3];
    float mu, mv;
    int i;

    printf("Digite as coordenadas de ~u: ");
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &u[i]);
    }

    printf("Digite as coordenadas de ~v: ");
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &v[i]);
    }


mu = sqrt(pow(u[0],2) + pow(u[1],2) + pow(u[2],2));
mv = sqrt(pow(v[0],2) + pow(v[1],2) + pow(v[2],2));

printf("O módulo de ~u é: %.2f\n", mu);
printf("O módulo de ~v é: %.2f\n", mv);

return 0;
}