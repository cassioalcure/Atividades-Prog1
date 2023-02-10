/*Crie um programa em linguagem C que mostre ao usuário um menu com 4 opções listadas a seguir.
1 Soma;
2 Multiplicação;
3 Menor e
4 Maior.
Após o usuário escolher qual das opções deseja, o programa deverá receber números inteiros e proceder
conforme a opção selecionada anteriormente. Se na opção 1, informar a soma dos dois números. Se
na opção 2, informar a multiplicação dos dois números. Se na opção 3, informar o menor dos dois
números, Se na opção 4, informar o maior dos dois números.*/

#include <stdio.h>

int main()
{

    int opcao, n1, n2, n3;

    printf("Escolha uma opção:\n1-Soma\n2-Multiplicação\n3-Menor\n4-Maior.\n");
    scanf("%d", &opcao);

    printf("Digite dois numeros para fazer a expressão selecionada:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    switch (opcao)
    {
    case 1: // Soma
        n3 = n1 + n2;
        printf("A soma de %d com %d é %d", n1, n2, n3);
        break;

    case 2: // Multiplicação
        n3 = n1 * n2;
        printf("A multiplicação de %d com %d é %d", n1, n2, n3);
        break;
    case 3: // Menor
        if (n1 > n2)
        {
            printf("%d é menor que %d", n2, n1);
        }
        else if (n2 < n1)
        {
            printf("%d é menor que %d", n1, n2);
        }
        else
        {
            printf("Digite dois números diferentes");
        }
        break;
    case 4: // Maior
        if (n1 < n2)
        {
            printf("%d é maior que %d", n2, n1);
        }
        else if (n2 < n1)
        {
            printf("%d é maior que %d", n1, n2);
        }
        else
        {
            printf("Digite dois números diferentes");
        }
        break;
    default:
        printf("Escolha uma opção válida.");
        break;
    }

    return 0;
}