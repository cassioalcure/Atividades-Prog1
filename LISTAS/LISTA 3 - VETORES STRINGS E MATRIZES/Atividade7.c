/*Crie um programa em linguagem C que receba uma string de até 20 letras. O programa deve contar
quantas vogais existem na string recebida. Ao final, o programa deve imprimir quantas vogais foram
encontradas. Considere para a contagem tanto vogais minúsculas quanto maiúsculas.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NUM 20

int main()
{

    char string[NUM+1];
    char letra;
    int i, j = 0;
    while (1)
    {
        \
        printf("Digite uma string de até 20 caracteres: ");
        scanf("%s", string);

        if (strlen(string) > NUM)
        {
            printf("A string tem que ter até 20 caracteres.\n");
            continue;
        }

        for (i = 0; i < NUM; i++)
        {
            letra = toupper(string[i]);
            if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
            {
                j++;
            }
        }
        printf("A quantidade de vogais eh: %d.\n", j);
        break;
    }
    return 0;
}