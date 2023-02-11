#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int codificada[200];
    char chave[] = "2022201305";
    char mensagem[200];
    int tamanho_mensagem = 200, tamanho_chave, opcao, i;

    FILE *arquivo = fopen("2022201305.dat", "r");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    for (i = 0; i < 200; i++)
    {
        fscanf(arquivo, "%d", &codificada[i]);
    }
    fclose(arquivo);
    // Decodificação da mensagem
    tamanho_chave = strlen(chave);
    for (i = 0; i < tamanho_mensagem; i++)
    {
        mensagem[i] = chave[i % tamanho_chave] ^ codificada[i];
    }
    mensagem[tamanho_mensagem] = '\0';
    printf("Mensagem decodificada: %s\n", mensagem);

    return 0;
}