/*Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de 20
números inteiros, e escreva no arquivo diferencas.dat a diferença entre cada dois números consecutivos
da sequência contida neste arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1[20], i, diferenca;

    FILE *arquivo = fopen("seqinteiros.dat", "r");
    FILE *arquivosaida = fopen("diferencas.dat", "w");
    if (arquivo == NULL || arquivosaida == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
        for (i = 0; i < 20; i++)
        {
            fscanf(arquivo, "%d", &n1[i]);
        }

        for (i = 0; i < 19; i++)
        {
            diferenca = n1[i + 1] - n1[i];
            fprintf(arquivosaida, "%d\n", diferenca);
        }

        fclose(arquivo);
        fclose(arquivosaida);

        return 0;
    }

    return 0;
}
