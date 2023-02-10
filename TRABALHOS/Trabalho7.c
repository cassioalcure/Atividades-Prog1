/*Trabalho de Programação I - piramidif.dat
UFES - SI 2022/2
Professor: Paulo Nunes
Alunos:Pedro Duque, Cássio Alcure, Estéfani Eller
*/

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