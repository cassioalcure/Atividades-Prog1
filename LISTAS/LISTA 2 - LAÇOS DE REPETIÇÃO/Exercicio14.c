/*Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar uma
letra minúsculas. O programa deve repetir a solicitação enquanto não for atendido, quando o usuário
digitar o caracter no intervalo solicitado o programa deve imprimir todas as letras do alfabeto iniciando
na letra ’a’ e indo até a letra informada, após imprimir todas as letras o programa deve terminar.*/

#include <stdio.h>

int main()
{

    char letra;
    int i;

    do
    {

        printf("Digite uma letra minúscula: ");
        scanf("%c", &letra);
    } while (letra < 'a' || letra > 'z');

    for (char i = 'a'; i <= letra; i++)
    {
        printf("%c ", i);
    }
    printf("\n");
    return 0;
}