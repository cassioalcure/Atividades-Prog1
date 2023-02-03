/*Crie um programa em linguagem C, utilizando o comando do .. while, que imprima uma mensagem
pedindo para o usuário digitar um número inteiro entre 1 e 10. O programa deve repetir a solicitação
enquanto não for atendido. Todo valor entre 1 e 10 deve ser somado coms os demais números digitados,
quando o somatório de todos os números aceitos for igual ou maior a 21, o programa deve terminar
imprimindo qual foi a soma total dos números aceitos.*/

#include <stdio.h>
int n1, soma = 0;

int main()
{
    do
    {
        printf("Digite um numero de 1 a 10: ");
        scanf("%d", &n1);

        soma += n1;
        if (soma >= 21)
        {
            printf("Soma: %d\n", soma);
            break;
        }
    } while (n1 >= 1 && n1 <= 10);

    return 0;
}