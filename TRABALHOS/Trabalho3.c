/*Trabalho de Programação I - Produto Escalar
UFES - SI 2022/2
Professor: Paulo Nunes
Alunos:Pedro Duque, Cássio Alcure, Estéfani Eller
*/

#include<stdio.h>

int main(void){
    int u[3], v[3], produto=0;
    for(int i=0; i<3; i++){
        printf("Digite o valor de u[%d]: ", i+1);
        scanf("%d", &u[i]);
    }
    for(int i=0; i<3; i++){
        printf("Digite o valor de v[%d]: ", i+1);
        scanf("%d", &v[i]);
    }
    for(int i=0; i<3; i++){
        produto += u[i]*v[i];
    }
    printf("O produto escalar de u e v é: %d.\n", produto);
    return 0;
}