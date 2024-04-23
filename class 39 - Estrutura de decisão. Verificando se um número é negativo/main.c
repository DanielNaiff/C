#include<stdio.h>
#include<stdlib.h>

int main(){

  int a = 10;

  printf("\nDigite um valor qualquer: ");
  scanf("%d", &a);

  a < 0 ? printf("\n\tvalor negativo!\n") : 
    a > 0 ? printf("\n\tValor positivo\n"): printf("\n\tValor igual a zero\n");

  if(a < 0){
    printf("\n\tvalor negativo!\n"); 
    printf("\nContinuacao do programa...\n");
  }else if (a > 0){
    printf("\n\tValor positivo\n");
  }else{
    printf("\nContinuacao do programa...\n");
  }
  printf("\nContinuacao do programa...\n");

  return 0;
}