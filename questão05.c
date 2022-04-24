#include <stdio.h>

int main() {
  int num, m = num;

  printf("Insira um número inteiro:\n");
  scanf("%d", &num);

  while( num != 0){
      if( num > m)
        m = num;
  printf("Digite 0 se quiser encerrar ou digite outro valor:\n");
    scanf("%d", &num);
  }

   printf("O maior número digitado é: %d\n", m);

  return 0;
}