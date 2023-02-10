/*Crie um programa em linguagem C, utilizando o comando while, que imprima um menu com 5
opções, sendo a opção 5 para sair, e pedindo para o usuário digitar uma das opções. Quando uma
opção for selecionada o programa deve imprimir na tela o nome da opção escolhida. O programa deve
repetir a solicitação enquanto não for escolhida a opção 5 para sair.*/

#include <stdio.h>

int main()
{

    int opcao = 0;

    while (opcao != 5)
    {

        printf("Escolha a sua opção:\n\n1-Evaristo\n2-Jocimar\n3-Ernesto\n4-Everaldo\n5-Sair\n");
        scanf("%d", &opcao);

        if (opcao == 1)
        { // Evaristo
            printf("Evaristo");
            break;
        }
        if (opcao == 2)
        { // Jocimar
            printf("Jocimar");
            break;
        }
        if (opcao == 3)
        { // Ernesto
            printf("Ernesto");
            break;
        }
        if (opcao == 4)
        { // Everaldo
            printf("Everaldo");
            break;
        }
        if (opcao == 5)
        { // Sair
            break;
        }
        else
        {
            printf("Opção inválida. Escolha outro número.");
        }
        return 0;
    }

    
}