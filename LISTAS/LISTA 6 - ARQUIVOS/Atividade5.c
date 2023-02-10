/*Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de 20
números inteiros, e imprima na tela o 1º, 4º, 9º, 13º e 19ºnúmeros contidos neste arquivo.*/

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
    printf("O 1o, 4o, 9o, 13o e 19o numeros do arquivo sao:\n");
    printf("%d %d %d %d %d ", n1[0], n1[3], n1[8], n1[12], n1[18]);
    printf("\n");
    return 0;
}