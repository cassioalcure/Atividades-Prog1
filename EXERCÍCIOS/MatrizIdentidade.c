/*O aluno deverá criar um programa em linguagem C que pede para o usuário digitar um inteiro positivo
que represente a ordem de uma matriz identidade n. Após receber o valor, o programa deverá alocar
dinamicamente a matriz com o tamanho adequado segundo a ordem n informada e preencher a matriz
com os valores de uma matriz identidade In. Ao final o programa deverá imprimir na tela a matriz identidade
In com os seus valores adequadamente preenchidos.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    while(1){
        printf("Digite um numero para definir o tamanho da matriz:\n");
        scanf("%d", &n);

        if(n<=0){
            printf("Escolha um numero maior que zero.\n");
        } else{
            break;
        }
    }

    int **matriz = malloc(sizeof(int*) * n);
    for(int i=0; i<n; i++){
        matriz[i] = malloc(sizeof(int)*n);
    }

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            if(i == j){
                matriz[i][j] = 1; 
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            if(j == n-1){
                printf("%d\n", matriz[i][j]);
            } else{
                printf("%d ", matriz[i][j]);
            }
        }
    }

    for(int i=0; i < n; i++){
        free(matriz[i]);
    }

    free(matriz);
    
    return 0;
}