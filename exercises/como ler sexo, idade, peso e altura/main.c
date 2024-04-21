#include <stdio.h>
#include <stdlib.h>

int main(){
  char sexo,a,b;
  int idade;
  float peso, altura;

  printf("Digite sexo(f,F ou m,M), idade, peso e altura:\n");
  scanf(" %c %d%f%f", &sexo, &idade, &peso, &altura);
  //espaco serve entre os %c -> comando para o computador desconsiderar o ENTER, TAB E ESPACO

  printf("Sexo: %c\nIdade: %d\nPeso: %f\nAltura: %f", sexo, idade, peso, altura);

  printf("Digite uma letra: ");
  scanf("%c", &a);
  printf("Digite uma letra: ");
  scanf("%c", &b);

  return 0;
}