#include<stdio.h>
#include<stdlib.h>

int main(){

  float despesa,valor;
  int gorjeta,numerodepessoas;


  printf("Digite a despesa do restaurante:");
  scanf("%f", &despesa);
  printf("Digite o valor da gorjeta:");
  scanf("%d",&gorjeta);
  printf("Numero de pessoas para dividir:");
  scanf("%d",&numerodepessoas);

  valor = (despesa + (((float)gorjeta/100)*despesa))/numerodepessoas;

  printf("\nValor para cada uma das pessoas: %f\n", valor);
  return 0;
}