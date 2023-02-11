/*Considerando que um vetor tridimensional ~v = (x; y; z). Conclua a função calculaModuloR3 para que o programa a seguir calcule
corretamente o módulo de um vetor tridimensional. Utilize as funções pow e sqrt da biblioteca
math.h para calcular respectivamente o quadrado e a raiz quadrada. Apenas o código da
função calculaModuloR3 precisa ser anexado à prova e os demais códigos da questão
não devem ser alterados.*/

#include <stdio.h>
#include <math.h>

typedef struct _vt3{
	float x;
	float y;
	float z;
} tVetorR3;

float calculaModuloR3(tVetorR3 v)
{
return sqrt((pow(v.x,2)) + (pow(v.y,2)) + (pow(v.z,2)));
}

int main(){
	tVetorR3 vetor;
	float modulo;
	//Leitura dos valores do vetor
	printf("Digite as três coordenadas do vetor: ");
	scanf("%f %f %f", &vetor.x, &vetor.y, &vetor.z);
	//Calcular módulo
	modulo = calculaModuloR3(vetor);
	//Imprimir o módulo
	printf("O módulo do vetor (%f, %f, %f) é %f", vetor.x, 
	        vetor.y, vetor.z, modulo);
	
	return 0;
}