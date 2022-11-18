/*1.12. Crie um programa em linguagem C, utilizando o comando for, que imprima uma mensagem pedindo
para o usuário digitar dois números inteiros. O programa deve imprimir todos os números inteiros do
menor até o maior dos dois. O programa deve terminar após imprimir todos os números.*/

#include <stdio.h>

int main()
{
    int n1, n2, old1, old2, loop;
    do
    {
        printf("Escolha um numero inteiro: ");
        scanf("%d", &n1);
        printf("Escolha outro numero inteiro: ");
        scanf("%d", &n2);

        old1 = n1;
        old2 = n2;

        if (n1 == n2 + 1 || n2 == n1 + 1)
        {
            printf("Nao tem numeros inteiros entre %d e %d\n", n1, n2);
        }
        else if (n1 < n2)
        {
            printf("%d\n", old1);
            for (n1++; n1 < n2; n1++)
            {
                printf("%d\n", n1);
            }
            printf("%d\n", old2);
             break;
        }
        else if (n2 < n1)
        {
            printf("%d\n", old2);
            for (n2++; n2 < n1; n2++)
            {
                printf("%d\n", n2);
            }
            printf("%d\n", old1);
            break;
        }
        else
        {
            printf("Por favor, escolha dois numeros diferentes.\n");
        }
    } while (n1 == n2 || n1 == n2 + 1 || n2 == n1 + 1);
    return 0;
}