/*Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar um
número inteiro positivo que represente o tamanho de um vetor (N). Após ter recebido o valor de N, o
programa deve criar um vetor de números reais com N posições ~u = (u1; u2; u3; . . . ; uN ) . Em seguida
o programa deve solicitar que o usuário digite N números reais. O programa deve calcular o módulo
do vetor da seguinte forma |~u| =√u12 + u22 + · · · + u2. Ao final, o programa deve imprimir qual é
o valor do módulo do vetor recebido |~u|. Inclua a biblioteca math.h e utilize as funções pow e
sqrt para calcular respectivamente o ao quadrado e a raiz quadrada.*/

#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    float u[100];
    float modulo;
    int i;

    printf("Digite o tamanho do vetor (N): ");
    scanf("%d", &n);

    printf("Digite as coordenadas de ~u: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &u[i]);
    }

    modulo = 0;
    for (i = 0; i < n; i++)
    {
        modulo += pow(u[i], 2);
    }
    modulo = sqrt(modulo);

    printf("O modulo do vetor ~u é: %f\n", modulo);

    return 0;
}