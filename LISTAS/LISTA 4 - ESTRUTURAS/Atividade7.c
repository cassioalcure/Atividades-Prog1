/*Crie um programa em linguagem C que receba 3 valores inteiros, sendo:
hora valores de 0 a 23,
minuto valores de 0 a 59 e
segundos valores de 0 a 59.
Se o usuário digitar os valores fora da faixa de valores aceita, o programa deve solicitar que o usuário
digite os valores novamente, porém no intervalo correto. Após receber os valores, o programa deve
armazená-los na estrutura tRelogio e imprimir na tela o valor de tRelogio após armazenado.*/

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

    while (1)
    {
        printf("Digite a hora: ");
        scanf("%d", &relogio.hora);
        printf("Digite o minuto: ");
        scanf("%d", &relogio.minuto);
        printf("Digite o segundo: ");
        scanf("%d", &relogio.segundo);

        if ((relogio.hora >= 24 || relogio.minuto >= 60 || relogio.segundo >= 60))
        {
            printf("Por favor, digite um horario que exista\n");
            continue;
        }
        else
        {
            printf("O relógio está marcando %d horas, %d minutos e %d segundos.\n", relogio.hora, relogio.minuto, relogio.segundo);
            break;
        }
    }

    return 0;
}