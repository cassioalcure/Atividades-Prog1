/*Crie um programa em linguagem C, utilizando o comando for, que imprima uma mensagem pedindo
para o usuário digitar 9 números reais. Quando o usuário digitar os 9 números o programa deve
terminar.*/

#include <stdio.h>

int main (void){

    float n[9];
    int i;

    for (i=0; i<9;i++){
        printf("Digite um numero: ");
        scanf("%f", &n[i]);
    }
    return 0;
}