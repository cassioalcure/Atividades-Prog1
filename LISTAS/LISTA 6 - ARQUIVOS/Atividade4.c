/*Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de 20
números inteiros, e imprima na tela todos os números da sequência contida neste arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1[20], i;

    FILE *arquivo = fopen("seqinteiros.dat", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    for (i = 0; i < 20; i++)
    {
        fscanf(arquivo, "%d", &n1[i]);
    }

    printf("A sequencia de inteiros no arquivo eh:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", n1[i]);
    }
    printf("\n");
    return 0;
}