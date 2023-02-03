#include <stdio.h>
#include <string.h>

int main() {
  char chave[] = "EARTE2020/1";
  char mensagem[100], codificada[100];
  int tamanho_mensagem, tamanho_chave, opcao, i;

  do {
    printf("\nMenu:\n");
    printf("1. Codificar\n");
    printf("2. Decodificar\n");
    printf("3. Sair\n");
    printf("Insira a opção desejada: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
      // Codificação da mensagem
      printf("Insira a mensagem a ser codificada: ");
      scanf("%s", mensagem);
      tamanho_mensagem = strlen(mensagem);
      tamanho_chave = strlen(chave);
      for (i = 0; i < tamanho_mensagem; i++) {
        codificada[i] = mensagem[i] ^ chave[i % tamanho_chave];
        printf("%d ", codificada[i]);
      }
      codificada[tamanho_mensagem] = '\0';
      printf("\n");
    }
    
    else if (opcao == 2) {
  // Decodificação da mensagem
  printf("Insira o tamanho da mensagem codificada: ");
  scanf("%d", &tamanho_mensagem);
  printf("Insira a mensagem a ser decodificada: ");
  for (i = 0; i < tamanho_mensagem; i++) {
    scanf("%d", &codificada[i]);
  }
  tamanho_chave = strlen(chave);
  for (i = 0; i < tamanho_mensagem; i++) {
    mensagem[i] = chave[i % tamanho_chave] ^ codificada[i];
  }
  mensagem[tamanho_mensagem] = '\0';
  printf("Mensagem decodificada: %s\n", mensagem);
}


} while (opcao != 3);

return 0;
}