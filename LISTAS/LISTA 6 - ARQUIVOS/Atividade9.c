/*Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de
20 números inteiros. Crie o arquivo piramidif.dat contendo 19 linhas. Sendo que a primeira linha
deve conter 19 números inteiros, onde cada número representa a diferença entre cada dois números
consecutivos da sequência lida originalmente. A segunda linha deve conter 18 números inteiros, onde
cada número representa a diferença entre cada dois números consecutivos da primeira linha. A terceira
linha deve conter 17 números inteiros, onde cada número representa a diferença entre cada dois números
consecutivos da segunda linha. E assim por diante, cada linha deve ter um número a menos que a
anterior e o valor de cada número deve representar a diferença entre cada dois números consecutivos
da linha anterior. A última linha do arquivo terá apenas um número.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
FILE *arquivo = fopen("seqinteiros.dat", "r");
FILE *arquivo2 = fopen("piramidif.dat", "w");
int numero, quantNum=0;
int **matriz;

if (arquivo == NULL) {
printf("Erro ao abrir o arquivo\n");
return 1;
}

while (fscanf(arquivo, "%d", &numero) != EOF) {
quantNum++;
}
rewind(arquivo);

matriz = (int**) malloc(quantNum * sizeof(int*));
for (int i = 0; i < quantNum; i++) {
matriz[i] = (int*) malloc((quantNum-i) * sizeof(int));
}

// alocação da matriz
quantNum = 0;
while (fscanf(arquivo, "%d", &numero) != EOF){
matriz[0][quantNum] = numero;
quantNum++;
}

for (int i = 1; i < quantNum; i++) {
for (int j = 0; j < quantNum-i; j++) {
matriz[i][j] = matriz[i-1][j+1] - matriz[i-1][j];
}
}

//imprimir matriz
for (int i = 0; i < quantNum-1; i++) {
for (int j = 0; j < quantNum-i-1; j++) {
fprintf(arquivo2, "%d ", matriz[i][j]);
}
fprintf(arquivo2, "\n");
}
fprintf(arquivo2, "%d", matriz[quantNum-1][0]);

fclose(arquivo);
fclose(arquivo2);

for (int i = 0; i < quantNum; i++) {
free(matriz[i]);
}
free(matriz);

return 0;
}