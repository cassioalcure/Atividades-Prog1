/*Trabalho de Programação I - Codificador de Mensagem
UFES - SI 2022/2
Professor: Paulo Nunes
Alunos:Pedro Duque, Cássio Alcure, Estéfani Eller
*/

/******************************************************************************************
 O grupo devera escrever um programa em C, utilizando a estrutura fornecida, que peca ao 
 usuario para digitar a quantidade de pacientes (nPacientes) que ele deseja registrar. Apos
 receber a quantidade, o programa deve alocar um vetor de TPessoa com o tamanho nPacientes.
 Apos alocar o vetor, o programa devera ler e armazenar no vetor os dados de nPacientes 
 pacientes. Para cada paciente registrado, o programa deve calcular e registrar o IMC 
 correspondente. Ao final o programa deve imprimir os dados registrados de todos os 
 pacientes.
******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
//Tipo tPessoa definido como uma estrutura
typedef struct _pessoa{
    char nome[30];
    int idade;
    char sexo;
    float altura;
    float peso;
    float imc;
} tPessoa;

void lePaciente(tPessoa *registro){
    //Ler e armazenar todos os dados de um paciente
    printf("\nDigite o nome: ");
    scanf(" %[^\n]s", registro->nome);
    printf("Digite a idade: ");
    scanf("%d", &(registro->idade));
    printf("Digite o sexo (M / F): ");
    scanf(" %c", &(registro->sexo));
    printf("Digite a altura: ");
    scanf("%f", &(registro->altura));
    printf("Digite a peso: ");
    scanf("%f", &(registro->peso));
    registro->imc = 0;
    printf("\n");
    fflush(stdin);	
}

void imprimePaciente(tPessoa registro){
    //Imprimir todos os dados de um paciente
    printf("+--------------------------------------+-------+\n");
    printf("| Nome: %30s |  IMC  |\n", registro.nome);
    printf("| Idade: %3d            Sexo: %c        |       |\n", registro.idade, registro.sexo);
    printf("| Altura: %4.2f          Peso: %5.1f    |  %4.1f |\n", registro.altura, registro.peso, registro.imc);
    printf("+--------------------------------------+-------+\n");
}

float calculaIMC(tPessoa registro){
    //Calcular e retornar o IMC de um paciente
    return registro.peso /(registro.altura*registro.altura);

}

int main(void) {
    //Parte principal do programa
    tPessoa *Pessoas;
    int quantPessoas;
    printf("Digite a quantidade de Pessoas: ");
    scanf("%d",&quantPessoas);
    Pessoas = malloc(quantPessoas * sizeof(tPessoa));
    for (int i = 0; i< quantPessoas;i++){
        lePaciente(&Pessoas[i]);
        Pessoas[i].imc = calculaIMC(Pessoas[i]);
        imprimePaciente(Pessoas[i]);
    }

    return 0;
}
