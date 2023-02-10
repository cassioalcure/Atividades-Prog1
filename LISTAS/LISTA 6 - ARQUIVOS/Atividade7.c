/*Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de 20
números inteiros, e escreva no arquivo razaofib.dat a divisão real de um número da sequência pelo
número anterior da sequência contida neste arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1[20], i;
    float resultado;
    FILE *arquivo_entrada = fopen("seqinteiros.dat", "r");
    FILE *arquivo_saida = fopen("razaofib.dat", "w");

    if (arquivo_entrada == NULL || arquivo_saida == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    for (i = 0; i < 19; i++)
    {
        fscanf(arquivo_entrada, "%d", &n1[i]);
        resultado = (float)n1[i + 1] / n1[i];
        fprintf(arquivo_saida, "%f\n", resultado);
    }

    printf("A razao fibonacci foi escrita no arquivo razaofib.dat\n");

    fclose(arquivo_entrada);
    fclose(arquivo_saida);

    return 0;
}