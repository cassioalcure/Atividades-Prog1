/*Crie um programa em linguagem C que receba 3 valores reais e os armazene na estrutura tVetorR3
criada anteriormente.*/

#include <stdio.h>

struct tVetorR3
{
    float x;
    float y;
    float z;
};


int main(){

struct tVetorR3 vetor;

printf("Digite a coordenada x: ");
scanf("%f",&vetor.x);
printf("Digite a coordenada y: ");
scanf("%f",&vetor.y);
printf("Digite a coordenada z: ");
scanf("%f",&vetor.z);


printf("As coordenadas do vetor sao: (%.2f,%.2f,%.2f)", vetor.x, vetor.y, vetor.z);

    return 0;
}

