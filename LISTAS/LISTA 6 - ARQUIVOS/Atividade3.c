/*Crie um programa em linguagem C que leia o arquivo real.dat, contendo um único número real, e
imprima na tela o número contido neste arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1;

    FILE *arquivo = fopen("real.dat", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    fscanf(arquivo, "%f", &n1);
    printf("O numero real no arquivo eh %f", n1);

    return 0;
}