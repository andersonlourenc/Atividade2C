#include <stdio.h>

int main() {

  printf("\ndivisiveis por 3 de 0 a 100\n");

   for(int i = 0; i <= 100; i++){

    if(i % 3 == 0){

   printf("%d é dívisivel de 3\n", i);

  }
     }

     printf("\ndivisiveis por 5 de 101 a 200 \n");

   for(int i = 101; i <= 200; i++){

    if(i % 5 == 0){

   printf("%d é dívisivel de 5\n", i);

      }    
  }

  return 0;
} 