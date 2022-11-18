#include <stdio.h>

int main(){
    
    //Declaração de Variáveis
    long int CPF, resto;
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
    int c10, c11, l, m;

    //Entrada
    printf("Digite um CPF: ");
    scanf("%ld", &CPF);
  
    if (CPF>99999999999){
      printf("CPF inválido!\n");
      return 0;
    }
  else{
    //Processamento

    d11 = CPF % 10;
    resto = CPF / 10;
  
    d10 = resto % 10;
    resto = resto / 10;
  
    d9 = resto % 10;
    resto = resto / 10;
  
    d8 = resto % 10;
    resto = resto / 10;
  
    d7 = resto % 10;
    resto = resto / 10;
  
    d6 = resto % 10;
    resto = resto / 10;
  
    d5 = resto % 10;
    resto = resto / 10;
  
    d4 = resto % 10;
    resto = resto / 10;
  
    d3 = resto % 10;
    resto = resto / 10;
  
    d2 = resto % 10;
    resto = resto / 10;
  
    d1 = resto % 10;
    resto = resto / 10;


  //D10:
  l=(10*d1)+(9*d2)+(8*d3)+(7*d4)+(6*d5)+(5*d6)+(4*d7)+(3*d8)+(2*d9);
  int r = l % 11;

  int old_d10 = d10; //Guarda o digito informado pelo usuário em old_d10
  //Calcula o digito correto
  if(r == 0 || r == 1){
    d10 = 0;
  } else {
    d10 = 11 - r;  
  }

  //D11:
  m=(10*d2)+(9*d3)+(8*d4)+(7*d5)+(6*d6)+(5*d7)+(4*d8)+(3*d9)+(2*d10);
  int R = m % 11;

  int old_d11 = d11; //Guarda o digito informado pelo usuário em old_d11
  //Calcula o digito correto
  if(R == 0 || R == 1){
    d11 = 0;
  } else {
    d11 = 11 - R;
  }
//Validação 
  if(d10 != old_d10 || d11 != old_d11){
    printf("CPF inválido!\n");
  }
  else if (d1 == d2 == d3 == d4 == d5 == d6 == d7 == d8 == d9 == d10 == d11 ){
    printf("CPF inválido!\n");
  }
  else {
    printf("CPF válido!\n");
  }

  return 0;
  }
}