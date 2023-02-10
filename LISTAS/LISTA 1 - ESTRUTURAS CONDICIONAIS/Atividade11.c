/*Crie um programa em linguagem C que receba dez números reais e retorne qual é a média e o desvio
padrão entre eles. Referência: https://youtu.be/c8x_ZChTiLk*/

#include <stdio.h>
#include<math.h>

int main (){

    //Declaração de Variáveis
    float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, media, soma, desvio;

    //Entrada
    printf("Digite 10 neros reais:\n");

    printf("Digite um nero:\n");
    scanf("%f", &n1);

    printf("Digite um nero:\n");
    scanf("%f", &n2);

    printf("Digite um nero:\n");
    scanf("%f", &n3);

    printf("Digite um nero:\n");
    scanf("%f", &n4);

    printf("Digite um nero:\n");
    scanf("%f", &n5);

    printf("Digite um nero:\n");
    scanf("%f", &n6);

    printf("Digite um nero:\n");
    scanf("%f", &n7);

    printf("Digite um nero:\n");
    scanf("%f", &n8);

    printf("Digite um nero:\n");
    scanf("%f", &n9);

    printf("Digite um nero:\n");
    scanf("%f", &n10);

    //Processamento da Média
    media = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / 10;

    //Saída da Média
    printf("A media desses numeros eh %f\n", media);

    //Processamento do Desvio
    n1=n1-media;
    n2=n2-media;
    n3=n3-media;
    n4=n4-media;
    n5=n5-media;
    n6=n6-media;
    n7=n7-media;
    n8=n8-media;
    n9=n9-media;
    n10=n10-media;
    n1=n1*n1;
    n2=n2*n2;
    n3=n3*n3;
    n4=n4*n4;
    n5=n5*n5;
    n6=n6*n6;
    n7=n7*n7;
    n8=n8*n8;
    n9=n9*n9;
    n10=n10*n10;
    soma=(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10;
    desvio=sqrt(soma);
    
    //Saída do Desvio
    printf("O desvio padrão é %f.\n",desvio);
    return 0;
}