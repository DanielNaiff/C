#include <stdio.h>
#include <stdlib.h>

int main(){

  unsigned short int numeroDeDiasTrabalhados;

  float valorTotal;

  printf("Digite o numero de dias traballhados: ");
  scanf("%u", &numeroDeDiasTrabalhados);

  valorTotal = (((float)numeroDeDiasTrabalhados*45) - (((float)numeroDeDiasTrabalhados*45)*((float)8/100)));

  printf("Valor total: %.2f",valorTotal);

  return 0;
}