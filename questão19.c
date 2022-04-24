#include <stdio.h>

int main() {
   int ini, fin, div;
   float media, soma = 0; 

  printf("Digite o número incial do intervalo:\n");
  scanf("%d", &ini);

  printf("Digite o número final do intervalo:\n");
  scanf("%d", &fin);

  div = fin - ini;

  for (int i = ini; i <= fin; i++){

     soma = soma + i;

  }

  media = soma/div;

  printf("A média é: %.2f\n", media);
  return 0;
} 