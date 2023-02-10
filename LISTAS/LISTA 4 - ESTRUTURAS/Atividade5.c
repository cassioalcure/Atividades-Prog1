/*Crie um programa em linguagem C que receba 2 valores reais e os armazene na estrutura tLatLong
criada anteriormente.*/

#include <stdio.h>

struct tLatLong{
float lati;
float longi;
};

int main(){

struct tLatLong latlong;
    
printf("Digite a latitude: ");
scanf("%f", &latlong.lati);
printf("Digite a longitude: ");
scanf("%f", &latlong.longi);


printf("A latitude eh de %.2f e a longitude eh de %.2f", latlong.lati, latlong.longi);
    return 0;

}