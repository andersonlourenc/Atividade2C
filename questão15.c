#include <stdio.h>
#include <math.h>

int main() {
  int pot;

  for (int I = 0; I <= 7; I++){
    pot = (pow(I,3));
    printf("O valor da potência de %d por 3: %d\n", I,pot);
  }
  
  return 0;
} 