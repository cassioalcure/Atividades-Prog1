/*Crie um programa em linguagem C que receba 3 valores inteiros e os armazene na estrutura tRelogio
criada anteriormente.*/

#include <stdio.h>

struct tRelogio
{
    int hora;
    int minuto;
    int segundo;
};
int main()
{

    struct tRelogio relogio;
    printf("Digite a hora: ");
    scanf("%d", &relogio.hora);
    printf("Digite o minuto: ");
    scanf("%d", &relogio.minuto);
    printf("Digite o segundo: ");
    scanf("%d", &relogio.segundo);

    printf("O relógio está marcando %d horas, %d minutos e %d segundos.\n", relogio.hora, relogio.minuto, relogio.segundo);

    return 0;
}