/*Utilizando o código chamado rendaAnual.c mostrado a seguir. Termine de escrever a função aumentaSalario. Com a função corretamente terminada, o programa em
linguagem C deverá receber cinco valores reais e armazená-los em um vetor de cinco posições. Cada
valor real lido representa o salário mensal de um funcionário. Em seguida o programa deverá receber
um número inteiro entre 0 e 4 que represente um dos funcionários cujo salário foi armazenado no
vetor. Por último, o programa deve receber um valor real que indique qual é o valor do aumento que o
funcionário indicado anteriormente deve receber. Após receber todas as informações o programa deve
acionar a função aumentaSalario para que ela altere o salário do funcionário indicado, acrescentando o
valor informado. Ao nal o programa deverá imprimir a renda anual dos cinco funcionários utilizando
a função imprimeRendaAnual.*/

#include <stdio.h>
#include <stdlib.h>

#define N 5

void imprimeRendaAnual(float salario)
{
    printf("Salario Anual e %f\n", 12 * salario);
}

void aumentaSalario(float *salario, float aumento)
{
    *salario += aumento;
}

int main()
{
    int i, k;
    float aumento, sal[N];

    printf("Digite %d numeros reais (salario mensal)\n", N);

    for (i = 0; i < N; i++)
        scanf("%f", &sal[i]);

    printf("Digite um numero inteiro de 0 a %d\n", N - 1);

    scanf("%d", &k);

    printf("Digite um numero real que represente quanto deve ser dado de aumento\n");
    scanf("%f", &aumento);

    aumentaSalario(&sal[k], aumento);

    for (i = 0; i < N; i++)
        imprimeRendaAnual(sal[i]);

    return 0;
}