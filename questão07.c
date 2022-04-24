#include <stdio.h>

int main() {

  float num1, num2, d = 0;

  printf("Digite o primeiro número:\n");
  scanf("%f", &num1);

  do {
    printf("Digite o segundo número\n");
    scanf("%f", &num2);

  if(num2 != 0){    
     d = num1/num2;
     printf("O resultado da divisão é: %.2f\n", d);
    }

 }while(num2 == 0);

  return 0;
}