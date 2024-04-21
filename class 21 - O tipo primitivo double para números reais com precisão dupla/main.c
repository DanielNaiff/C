#include <stdio.h>
#include <stdlib.h>

int main(){

  float x = 3.1415;

  double y = 3.1415435039453405543;

  printf("Um double precisa de %d bytes de memoria.\n", sizeof y );

  return 0;
}