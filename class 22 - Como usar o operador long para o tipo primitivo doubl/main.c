#include <stdio.h>
#include <stdlib.h>

int main(){

  float x = 3.1415;

  long double y = 3.1415435039453;

  printf("Valor de y: %Lf\n", y );
  __mingw_printf("Valor de y: %Lf\n", y);
  printf("Um double precisa de %d bytes de memoria.\n", sizeof y );

  return 0;
}