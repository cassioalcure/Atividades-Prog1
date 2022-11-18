/*Crie um programa em linguagem C que receba um tempo em anos e imprima quantos dias são equiva-
lentes ao tempo informado. Ex. 3 anos equivalem a 1095 dias.*/
#include <stdio.h>

int main(){

    int dias, anos, anobis;

    printf("Escolha uma quantidade de anos: ");
    scanf("%d", &anos);

    anobis = (anos)/(4);
    dias = (anos)*(365) + (anobis);

    printf("%d anos sao %d dias", anos, dias);

    return 0;
}