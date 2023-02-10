/*Crie um programa em linguagem C, utilizando o comando while, que imprima uma mensagem
pedindo para o usuário digitar uma vogal em letra maiúscula. O programa deve repetir a solicitação
enquanto não for atendido, quando o usuário digitar o caracter no intervalo solicitado o programa deve
terminar.*/

#include <stdio.h>

int main()
{
    char letra;

    printf("Digite uma vogal em letra maiuscula: ");
    scanf("%c", &letra);

    while (letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra != 'U')
    {
        printf("Digite uma vogal em letra maiuscula: ");
        scanf(" %c", &letra);
    }
    printf("Vogal válida digitada.");
    return 0;
}