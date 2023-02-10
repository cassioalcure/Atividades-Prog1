/*Crie um programa em linguagem C que leia o arquivo inteiro.dat, contendo um único número inteiro,
e imprima na tela o número contido neste arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1;

    FILE *arquivo = fopen("inteiro.dat", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

     fscanf(arquivo, "%d", &n1);
     printf("O numero no arquivo eh %d,", n1);

    return 0;
}
