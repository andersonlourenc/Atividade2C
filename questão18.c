#include <stdio.h>

int main(){

  int i = 0;
  float dobro = 0, somat = 0;

  for(dobro = 1; dobro >= 0 && i!= 64; dobro = (2*dobro)){

    i++;

    printf("%d-) Quadro possuí %.0f grãos de trigo\n", i, dobro);

    somat += dobro;

  } 

    printf("\nO somatório é: %.0f\n", somat);
  return 0;
}