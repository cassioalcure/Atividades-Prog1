/*Crie um programa em linguagem C que receba uma palavra de até 25 letras. O programa deve calcular
a pontuação da palavra multiplicando a soma da pontuação de cada letra pelo tamanho da palavra.
Ao final, o programa deve imprimir a pontuação obtida pela palavra digitada. A pontuação de cada
letra é a seguinte:
1 ponto ’A’, ’E’, ’I’, ’O’, ’S’, ’U’, ’M’, ’R’, ’T’
2 pontos ’D’, ’L’, ’C’, ’P’
3 pontos ’N’, ’B’, ’Ç’
4 pontos ’F’, ’G’, ’H’, ’V’
5 pontos ’J’
6 pontos ’Q’
8 pontos ’X’, ’Z’, ’K’, ’Y’, ’W’
Considere letras maiúsculas e minúsculas como iguais entre si, por exemplo ’a’ e ’A’
devem ser consideradas idênticas, assim como ’b’ e ’B’, etc.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NUM 20

int main()
{

    char palavra[NUM + 1];
    char letra;
    int i, pts = 0;
    while (1)
    {

        printf("Digite uma palavra de até 20 caracteres: ");
        scanf("%s", palavra);

        if (strlen(palavra) > NUM)
        {
            printf("A palavra tem que ter até 20 caracteres.\n");
            continue;
        }

        for (i = 0; i < NUM; i++)
        {
            letra = toupper(palavra[i]);

            // 1 ponto
            if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'S' || letra == 'M' || letra == 'T' || letra == 'R')
            {
                pts++;
            }
            // 2 pontos
            if (letra == 'D' || letra == 'L' || letra == 'C' || letra == 'P')
            {
                pts += 2;
            }
            // 3 pontos
            if (letra == 'N' || letra == 'B' || letra == 'Ç')
            {
                pts += 3;
            }
            // 4 pontos
            if (letra == 'F' || letra == 'G' || letra == 'H' || letra == 'V')
            {
                pts += 4;
            }
            // 5 pontos
            if (letra == 'J')
            {
                pts += 5;
            }
            // 6 pontos
            if (letra == 'Q')
            {
                pts += 6;
            }
            // 8 pontos
            if (letra == 'X' || letra == 'Z' || letra == 'K' || letra == 'Y' || letra == 'W')
            {
                pts += 8;
            }
        }
        printf("A pontuação obtida foi: %d.\n", pts);
        break;
    }
    return 0;
}
