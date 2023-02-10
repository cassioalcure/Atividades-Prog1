/*Utilizando o código chamado saque.c mostrado a seguir. Termine de escrever a função sacar. Com a função corretamente terminada, o programa em linguagem
C deverá receber um valor real que represente o saldo de uma conta bancária. A seguir o programa
deve receber um valor a ser sacado. De posse do valor, o programa deverá acionar a função sacar. A
função deve vericar se o valor a ser sacado é menor que o saldo disponível, caso seja, a função deve
diminuir o valor sacado do saldo e imprimir na tela uma mensagem informando que o saque foi feito,
caso contrário, a função deve informar que o saldo é insuciente. Caso seja informado um valor de
saque menor ou igual a zero, o programa deve se encerrar.*/

#include <stdio.h>
#include <stdlib.h>

void sacar(float *saldo, float saque)
{
    if (saque <= 0.0)
    {
        printf("Tente novamente com um valor valido\n");
        exit(0);
    }
    else if (*saldo >= saque)
    {
        *saldo -= saque;
        printf("Saque realizado com sucesso! Novo saldo: %.2f\n", *saldo);
    }
    else
    {
        printf("Saldo insuficiente.\n");
    }
}

int main()
{
    float saldo, saque = 1.0;
    printf("Digite o saldo inicial (numero real): ");
    scanf("%f", &saldo);

    while (saque > 0.0)
    {
        printf("Digite o valor a ser sacado: ");
        scanf("%f", &saque);
        sacar(&saldo, saque);
    }

    return 0;
}
