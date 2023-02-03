#include <stdio.h>
int main(void)
{
//Declaração de variáveis 
    float n1, n2, n3, media;
//Entrada de Dados
    printf("Escolha um numero: ");
        scanf("%f", &n1);
        printf("Escolha outro numero:");
        scanf("%f", &n2);
        printf("Escolha outro numero: ");
        scanf("%f", &n3);
//Processamento
    media = (n1 + n2 + n3) / 3;
//Saída
    printf("A media de %f com %f com %f eh: %f\n", n1, n2, n3, media);
    return 0;
}