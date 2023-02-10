/*Crie um programa em linguagem C que receba 2 conjuntos de 3 valores inteiros, sendo
hora valores de 0 a 23,
minuto valores de 0 a 59 e
segundos valores de 0 a 59.
Após receber os dois conjuntos de valores, o programa deve armazená-los em duas variáveis do tipo
tRelogio. Após armazenado, o programa deverá calcular quanto tempo existe entre os dois valores
registrados nas duas variáveis tRelogio. Ao final, o programa deve imprimir qual foi a o valor calculado.*/

#include <stdio.h>
struct tRelogio
{
    int hora;
    int minuto;
    int segundo;
};
int main()
{
    struct tRelogio relogio, relogio2, relogio3;

    // Primeiro relógio
    printf("Digite os valores do primeiro relógio:\n");
    do
    {
        printf("Digite a hora: ");
        scanf("%d", &relogio.hora);
    } while (relogio.hora < 0 || relogio.hora > 23);
    do
    {
        printf("Digite o minuto: ");
        scanf("%d", &relogio.minuto);
    } while (relogio.minuto < 0 || relogio.minuto > 59);
    do
    {
        printf("Digite o segundo: ");
        scanf("%d", &relogio.segundo);
    } while (relogio.segundo < 0 || relogio.segundo > 59);

    // Segundo Relógio
    printf("Digite os valores do segundo relógio:\n");
    do
    {
        printf("Digite a hora: ");
        scanf("%d", &relogio2.hora);
    } while (relogio2.hora < 0 || relogio2.hora > 23);
    do
    {
        printf("Digite o minuto: ");
        scanf("%d", &relogio2.minuto);
    } while (relogio2.minuto < 0 || relogio2.minuto > 59);
    do
    {
        printf("Digite o segundo: ");
        scanf("%d", &relogio2.segundo);
    } while (relogio2.segundo < 0 || relogio2.segundo > 59);
    // Cálculo de quanto tempo existe de diferença entre os dois relógios

    if (relogio.hora == relogio2.hora && relogio.minuto == relogio2.minuto && relogio.segundo == relogio2.segundo)
    {
        printf("Os dois relógios estão mostrando o mesmo horário.");
        return 0;
    }
    // Horas
    if (relogio.hora > relogio2.hora)
    {
        relogio3.hora = relogio.hora - relogio2.hora;
    }
    else if (relogio2.hora > relogio.hora)
    {
        relogio3.hora = relogio2.hora - relogio.hora;
    }

    // Minutos
    if (relogio.minuto > relogio2.minuto)
    {
        relogio3.minuto = relogio.minuto - relogio2.minuto;
    }
    else if (relogio2.minuto > relogio.minuto)
    {
        relogio3.minuto = relogio2.minuto - relogio.minuto;
        relogio3.hora--;
    }

    // Segundos
    if (relogio.segundo > relogio2.segundo)
    {
        relogio3.segundo = relogio.segundo - relogio2.segundo;
    }
    else if (relogio2.segundo > relogio.segundo)
    {
        relogio3.segundo = relogio2.segundo - relogio.segundo;
        if (relogio3.minuto > 0)
        {
            relogio3.minuto--;
        }
        else
        {
            relogio3.minuto = 59;
            relogio3.hora--;
        }
    }

    printf("A diferença entre os dois relógios é de: %d horas, %d minutos e %d segundos.", relogio3.hora, relogio3.minuto, relogio3.segundo);

    return 0;
}