/*Crie um programa em linguagem C que receba duas palavras de cinco letras. O programa deve
calcular quantas letras idênticas na mesma posição existem entre as duas palavras. EX: P = "corda"e
Q = "carne", neste caso o programa deve retornar que existem 2 coincidências, sendo elas a letra
’c’ na primeira posição e a letra ’r’ na terceira posição. Ao final, o programa deve imprimir quantas
coincidências foram encontradas entre as duas palavras recebidas. Considere letras maiúsculas e
minúsculas como diferentes entre si.*/

#include <stdio.h>
#include <string.h>

#define NUM 5

int main()
{

    char palavra[NUM+1], palavra1[NUM+1];

    while (1)
    {
        int i, j = 0;
        \
        printf("Digite uma palavra de 5 caracteres: ");
        scanf("%s", palavra);
        printf("Digite outra palavra de 5 caracteres: ");
        scanf("%s", palavra1);

        if (!(strlen(palavra) == NUM && strlen(palavra1) == NUM))
        {
            printf("As palavras tem que ter 5 caracteres.\n");
            continue;
        }

        for (i = 0; i < NUM; i++)
        {
            if (palavra[i] == palavra1[i])
            {
                printf("A letra \"%c\" eh a mesma na posicao %d.\n", palavra[i], i + 1);
                j++;
            }
        }
        printf("A quantidade de letras iguais eh: %d.\n", j);
        break;
    }
    return 0;
}