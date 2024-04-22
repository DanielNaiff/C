#include<stdio.h>
#include<stdlib.h>

int main(){

  int a, b;

  printf("Digite um valor: ");
  scanf("%d", &a);
  printf("Digite um valor: ");
  scanf("%d", &b);

  a= a + b;
  b = a - b;
  a = a - b;
 printf("\nValor do primeiro valor trocado com o segundo: %d\n",b);
  printf("\nValor do segundo valor trocado com o primeiro: %d\n",a);
  return 0 ;
}