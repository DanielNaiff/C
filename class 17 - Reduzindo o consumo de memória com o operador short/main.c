#include <stdio.h>
#include <stdlib.h>

int main(){

  int y = 0;
  short int x = 32767;

  printf("Tamanho de um int na memoria: %d bytes\n", sizeof y );
  printf("Tamanho em memoria de um short int: %d bytes\n", sizeof x);

  return 0;
}
