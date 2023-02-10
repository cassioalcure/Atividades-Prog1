/*Crie um programa em linguagem C que receba 2 conjuntos de 3 valores inteiros, sendo
hora valores de 0 a 23,
minuto valores de 0 a 59 e
segundos valores de 0 a 59.
Se o usuário digitar os valores fora da faiza de valores aceita, o programa deve solicitar que o usuário
digite os valores novamente, porém no intervalo correto. Após receber os dois conjuntos de valores,
o programa deve armazená-los em duas variáveis do tipo tRelogio. Após armazenado, o programa
deverá calcular se o primeiro valor digitado de tRelogio representa um horário anterior ao segundo
valor digitado de tRelogio. Ao final, o programa deve imprimir qual dod dois valores de tRelogio
representa um horário anterior.*/

#include <stdio.h>
struct tRelogio
{
    int hora;
    int minuto;
    int segundo;
};
int main()
{
    struct tRelogio relogio, relogio2;

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
    } while (relogio.minuto < 0 || relogio.minuto > 59);

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
    } while (relogio2.minuto < 0 || relogio2.minuto > 59);

    // Comparação dos valores
    if (relogio.hora == relogio2.hora && relogio.minuto == relogio2.minuto && relogio.segundo == relogio2.segundo)
    {
        printf("Os dois relógios estão mostrando o mesmo horário.");
        return 0;
    }
    if (relogio.hora < relogio2.hora)
    {
        printf("O primeiro relógio representa um horário anterior.\n");
    }
    else if (relogio.hora == relogio2.hora)
    {
        if (relogio.minuto < relogio2.minuto)
        {
            printf("O primeiro relógio representa um horário anterior.\n");
        }
        else if (relogio.minuto == relogio2.minuto)
        {
            if (relogio.segundo < relogio2.segundo)
            {
                printf("O primeiro relógio representa um horário anterior.\n");
            }
            else
            {
                printf("O segundo relógio representa um horário anterior.\n");
            }
        }
        else
        {
            printf("O segundo relógio representa um horário anterior.\n");
        }
    }
    else
    {
        printf("O segundo relógio representa um horário anterior.\n");
    }
}