#include<stdio.h>
#include<stdlib.h>

int main(){

  int a = 10;

  printf("\nDigite um valor qualquer: ");
  scanf("%d", &a);

  a < 0 ? printf("\n\tvalor negativo!\n") : printf("\n\tValor positivo\n");

  if(a < 0){
    printf("\n\tvalor negativo!\n"); 
    printf("\nContinuacao do programa...\n");
  }else{
    printf("\n\tValor positivo\n");
  }
  printf("\nContinuacao do programa...\n");

  return 0;
}