/*Crie um programa em linguagem C que receba a altura e o peso de uma pessoa e imprima na tela o
índice de massa corporal (IMC).*/
#include <stdio.h>

int main()
{

    float altura, peso, imc;

    printf("Qual eh sua altura?(em m): ");
    scanf("%f", &altura);
    printf("Qual eh seu peso?(em kg): ");
    scanf("%f", &peso);

    imc = ((peso) / (altura * altura));

    printf("Seu IMC eh %f", imc);

    return 0;
}
