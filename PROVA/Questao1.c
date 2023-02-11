/*Considerando o método de decodificação por XOR explicado abaixo, e utilizado no trabalho
T5 da disciplina, utilize seu número de matrícula como a chave K e escreva o código em
linguagem C que decodifique a mensagem codificada contida no arquivo .dat cujo nome é o seu
seu número de matrícula. Tenha em mente que a mensagem codificada contida no arquivo
.dat tem tamanho de 200 números inteiros. Após decodificada, a mensagem exibirá um número
inteiro de 7 dígitos (valor entre 1.000.000 e 9.999.999) que deve ser preenchido na
prova.
O código criado para solucionar esta questão deve ser anexado à prova.
Número de 7 dígitos Após decodificado, o arquivo conterá uma mensagem e um código
numérico de 7 dígitos que deve ser anexada à prova.

Decodificação O método a ser aplicado utiliza uma operação matemática simples aplicada

entre cada letra da mensagem codificada C e da chave K, progressivamente. A operação mate-
mática que será utilizada na codificação chama-se XOR, matematicamente é simbolizada por ⊕

e na linguagem C é executado utilizando o símbolo de acento circunflexo (^).
Quando estamos de posse da mensagem codificada C e da chave K e temos o interesse de gerar
a mensagem M, este processo é chamado de decodificação. Este processo é feito aplicando a
mesma operação XOR, uma a uma, entre cada número da mensagem codificada C e cada letra
da chave K, gerando assim cada letra da mensagem M.

Exemplo de decodificação Supondo que o valor da mensagem codificada C e da chave K
sejam C = {18, 17, 14, 4, 12, 0,

*/
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