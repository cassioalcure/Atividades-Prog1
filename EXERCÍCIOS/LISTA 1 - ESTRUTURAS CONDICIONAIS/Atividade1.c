//Crie um programa em linguagem C que imprima o nome na tela o nome de quem escreveu o programa.
#include <stdio.h>

int main(void){
    char nome[26];

    printf("Digite um nome: ");
    scanf("%s", &nome);
    printf("O nome digitado eh: %s", nome);

    return 0;
}