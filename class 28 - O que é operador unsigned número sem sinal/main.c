#include<stdio.h>
#include<stdlib.h>
/*
trocar o %d por %u
limite para o tipo int: 2147483647
short int -> %d ou %hi
unsigned short int %hu ou %d
unsigned long int %lu
*/

int main(){

  unsigned int x = 2147483647;//limite para o int

  unsigned short int y = 55000; // aumentou o limite do positivo do short int

  printf("\n\t%u\n\n", ++x);

  printf("\n\t%d\n\n", y);

  return 0;
}