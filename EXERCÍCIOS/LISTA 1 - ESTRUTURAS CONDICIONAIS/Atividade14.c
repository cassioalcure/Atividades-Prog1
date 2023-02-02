/*Considerando um jogo de cartas onde as cartas de Copas, Espadas, Paus e Ouros têm, respectivamente,
os poderes 1, 2, 3 e 5. Considerando que a força de ataque de uma carta é a multiplicação de seu número
pelo poder de seu naipe. Crie um programa em linguagem C que receba uma carta, representada pelo
seu número e seu naipe, nesta ordem, e imprima a força de ataque da carta.
Considere que os naipes são representados como números inteiros conforme ilustrado a seguir:
1 Copas;
2 Espadas;
3 Paus e
4 Ouros.*/

#include <stdio.h>

int main()
{

    int numero, naipe;
    int forca;

    printf("Insira o número da carta: ");
    scanf("%d", &numero);
    printf("Insira o naipe da carta (1 para Copas, 2 para Espadas, 3 para Paus e 4 para Ouros): ");
    scanf("%d", &naipe);

    switch (naipe)
    {
    case 1: // Copas

        forca = numero * 1;
        break;

    case 2: // Espadas
        forca = numero * 2;
        break;
    case 3: // Paus
        forca = numero * 3;
        break;
    case 4: // Ouros
        forca = numero * 5;
        break;

    default: // Naipe Inválido
        printf("Naipe inválido\n");
        break;
    }

    printf("Força de ataque da carta: %d", forca);

    return 0;
}
