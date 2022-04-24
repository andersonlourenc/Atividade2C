#include <stdio.h>
#include <math.h>

int main() {
  float pi;
   int limite;

  printf("Insira um limite para a série:");
  scanf("%d", &limite);

  for ( int i = 0; i < limite; i++){

   pi += pow(-1, i)/ (2*i + 1);

   printf("%d-) pi = %f\n", i+1,  pi*4);

  }

  return 0;
} 