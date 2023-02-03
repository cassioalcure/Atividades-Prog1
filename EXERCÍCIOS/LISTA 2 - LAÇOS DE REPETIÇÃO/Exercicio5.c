/*Crie um programa em linguagem C, utilizando o comando while, que imprima uma mensagem
pedindo para o usuário digitar um número real entre 0.0 e 1.0. O programa deve repetir a solicitação
enquanto não for atendido, quando o usuário digitar o número no intervalo solicitado o programa deve
terminar.*/

#include <stdio.h>

int main()
{

    float n1;

    printf("Digite um número real entre 0.0 e 1.0: ");
    scanf("%f", &n1);


while (n1 < 0.0 || n1 > 1.0){

    printf("Número inválido. Você não sabe ler? Digite um número real entre 0.0 e 1.0: ");
    scanf("%f", &n1);
}
    return 0;

}