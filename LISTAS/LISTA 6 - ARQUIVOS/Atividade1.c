/*Crie um programa em linguagem C que leia o arquivo palavra.dat, contendo uma única string, e imprima
na tela a palavra contida neste arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char palavra[100];

    FILE *arquivo = fopen("palavra.dat", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    fscanf(arquivo, "%s", palavra);
    printf("A palavra contida no arquivo e: %s\n", palavra);
    fclose(arquivo);

    return 0;
}