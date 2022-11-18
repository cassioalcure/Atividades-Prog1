/*Trabalho de Programação I - Caixa Eletrônico
UFES - SI 2022/2
Professor: Paulo Nunes
Alunos:Pedro Duque, Cássio Alcure, Estéfani Eller
*/
#include <stdio.h>

int main(void)
{
    // Declaração de Variáveis
    int valor, n200 = 0, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, resto;

    // Entrada
    printf("Qual eh o valor que voce deseja sacar?\nR$");
    scanf("%d", &valor);

    // Processamento
    if (valor < 2)
    {
        printf("Erro: Valor invalido. Tente novamente com outro valor.\n");
        return 1;
    }
    else
    {

        n200 = valor / 200;
        resto = valor % 200;
        if (n200 > 0 && (resto == 1 || resto == 3))
        {
            n200 = n200 - 1;
            resto = resto + 200;
        }

        n100 = resto / 100;
        resto = resto % 100;
        if (n100 > 0 && (resto == 1 || resto == 3))
        {
            n100 = n100 - 1;
            resto = resto + 100;
        }
        n50 = resto / 50;
        resto = resto % 50;
        if (n50 > 0 && (resto == 1 || resto == 3))
        {
            n50 = n50 - 1;
            resto = resto + 50;
        }
        n20 = resto / 20;
        resto = resto % 20;
        if (n20 > 0 && (resto == 1 || resto == 3))
        {
            n20 = n20 - 1;
            resto = resto + 20;
        }

        n10 = resto / 10;
        resto = resto % 10;
        if (n10 > 0 && (resto == 1 || resto == 3))
        {
            n10 = n10 - 1;
            resto = resto + 10;
        }
        n5 = resto / 5;
        resto = resto % 5;
        if (n5 > 0 && (resto == 1 || resto == 3))
        {
            n5 = n5 - 1;
            resto = resto + 5;
        }

        n2 = resto / 2;
        resto = resto % 2;
    }
    if (resto > 0)
    {
        printf("Erro: Nao foi possivel fazer o saque. Tente novamente com outro valor \n");
        return 1;
    }

    // Saída
    printf("Notas de 200= %d \n", n200);
    printf("Notas de 100= %d \n", n100);
    printf("Notas de 50= %d \n", n50);
    printf("Notas de 20= %d \n", n20);
    printf("Notas de 10= %d \n", n10);
    printf("Notas de 5= %d \n", n5);
    printf("Notas de 2= %d \n", n2);
    return 0;
}