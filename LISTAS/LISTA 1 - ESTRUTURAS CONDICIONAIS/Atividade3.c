/*Crie um programa em linguagem C que receba uma temperatura em graus fahrenheit (F) e a converta
para graus celsius (C).*/

#include <stdio.h>

int main(){

    float celsius, fahrenheit;

    printf("Digite uma temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5.0*((fahrenheit-32.0)/9.0);

    printf("%f graus fahrenheit sao %f graus celsius.", fahrenheit, celsius);

}