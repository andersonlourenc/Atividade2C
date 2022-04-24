#include <stdio.h>
#include <stdlib.h>

int main() {
  int Entrada[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,'\0'}, F[11], i;
  
  for (i = 0; i < 10; i++) {
        for (F[i] = 1; Entrada[i] > 1; Entrada[i]--) {

           F [i] *= Entrada[i];
        }

      if(i % 2 == 0){
        printf("O fatorial de %d é %d\n", i+1, F[i]);

        }

      }
    return 0;
} 