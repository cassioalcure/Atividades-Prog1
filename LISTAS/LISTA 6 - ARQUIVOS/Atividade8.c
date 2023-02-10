/*Crie um programa em linguagem C que leia o arquivo clientes.dat, contendo 5 linhas onde cada linha
contém 2 números reais. Considerando que o primeiro número de cada linha representa o peso de uma
pessoa e o segundo número representa a altura desta mesma pessoa, escreva no arquivo imc.dat o peso,
a altura e o IMC de cada uma das 5 pessoas. Para calcular o IMC utilize a fórmula a seguir:*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso[5], altura[5], imc[5];
    int i;
    FILE *arquivo_entrada = fopen("clientes.dat", "r");
    if (arquivo_entrada == NULL)
    {
        printf("Erro ao abrir o arquivo de entrada\n");
        return 1;
    }

    FILE *arquivo_saida = fopen("imc.dat", "w");
    if (arquivo_saida == NULL)
    {
        printf("Erro ao abrir o arquivo de saída\n");
        return 1;
    }

    for (i = 0; i < 5; i++)
    {
        fscanf(arquivo_entrada, "%f %f", &peso[i], &altura[i]);
        imc[i] = peso[i] / (altura[i] * altura[i]);
        fprintf(arquivo_saida, "Peso: %.2f kg\nAltura: %.2f m\nIMC: %.2f\n\n", peso[i], altura[i], imc[i]);
    }

    fclose(arquivo_entrada);
    fclose(arquivo_saida);

    return 0;
}