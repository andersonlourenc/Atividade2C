#include <stdio.h>

int main() {
  int num, fatorial;

  printf("Insira um número inteiro e positivo:\n");
  scanf("%d", &num);

  for(fatorial = 1; num > 1; num = num - 1){
    fatorial = fatorial * num;
  }

  printf("O fatorial do número é: %d\n", fatorial);

  return 0;
}