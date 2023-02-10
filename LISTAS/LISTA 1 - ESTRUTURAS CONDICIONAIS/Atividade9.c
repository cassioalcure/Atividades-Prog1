/*Considerando que uma lasanha de presunto e queijo possui 7,3%, 11,7% e 6,0% da sua massa, respec-
tivamente, em gordura, carboidratos e proteínas. Considerando também que gordura, carboidrato e
proteína possuem respectivamente 9, 4 e 4 calorias por grama. Crie um programa em linguagem C que
receba o peso de lasanha e calcule a quatidade total de calorias da porção informada.*/
#include <stdio.h>

int main(){

    float gord, carb, prot, lasanha;

    printf("Escreva o peso da lasanha em gramas: ");
    scanf("%f", &lasanha);

    gord = 7,3 * 9 / lasanha;
    carb = 11,7 * 4 / lasanha;
    prot = 6 * 4 / lasanha;

    return 0;
}