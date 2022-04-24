#include <stdio.h>

int main() {
  int num, tabuada;

  printf("Digite o número do número que deseja saber:\n");
  scanf("%d", &num); 


   printf("Tabuada do %d\n", num);

  for(int i = 1; i <=10; i++){

    tabuada = num*i;

    printf("%d * %d = %d\n", num, i, tabuada);

  }

  return 0;

}