/*Olá! Esse programa é uma calculadora da média de Programação I. Você pode saber quanto você tirou de média,
ou saber quanto você precisa tirar na prova para passar direto baseado nas suas notas de atividades e trabalhos.*/

#include <stdio.h>

int main() {
    int opcao;
    float trabalhos[7], atividade, prova, media;

    do {
        printf("\n\n=====Menu=====\n\n");
        printf("1- Calcular as notas\n2- Não tenho a nota da prova ainda\n3- Sair\n");
        printf("\nInsira sua opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\nInsira a nota da atividade: ");
            scanf("%f", &atividade);

            for (int i = 0; i < 7; i++) {
                printf("\nInsira a nota do trabalho %d: ", i+1);
                scanf("%f", &trabalhos[i]);
            }

            printf("\nInsira a nota da prova: ");
            scanf("%f", &prova);

            media = (atividade + trabalhos[0] + trabalhos[1] + trabalhos[2] + trabalhos[3] + trabalhos[4] + trabalhos[5] + trabalhos[6] + 8 * prova) / 16;
            printf("\nA média do aluno é %.2f", media);

            if (media >= 7) {
                printf("\nParabéns, você passou!\n");
            } else {
                printf("\nInfelizmente você não passou, estude mais!\n");
            }
        } else if (opcao == 2) {
            printf("\nInsira a nota da atividade: ");
            scanf("%f", &atividade);

            for (int i = 0; i < 7; i++) {
                printf("\nInsira a nota do trabalho %d: ", i+1);
                scanf("%f", &trabalhos[i]);
            }

            media = (atividade + trabalhos[0] + trabalhos[1] + trabalhos[2] + trabalhos[3] + trabalhos[4] + trabalhos[5] + trabalhos[6] + 8 * 0) / 16;
            printf("\nA média do aluno é %.2f", media);

            if (media >= 7) {
                printf("\nParabéns, você passou!\n");
            } else {
                printf("\nPara passar é preciso tirar %.2f na prova.\n", (7 - media) * 2);
            }
        }
    } while (opcao != 3);

    return 0;
}
