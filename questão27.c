#include <stdio.h>

int main() {
 int num, maior = 0, menor = 0, p = 0;

 do{

    printf("Digite número inteiro:\n");
    scanf("%d", &num);

   if( num > maior){

     maior = num;

   } else if(num > menor) {

     if(num > 0){

       menor = num;

    }

   }

   p = maior * menor;

   printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor); 


  }while( (num > 0) && (!num % 2 == 0));

    printf("\n--- Resultado final ---\n");
     printf("O maior valor é: %d\n", maior);
     printf("O menor valor é: %d\n", menor);
     printf("O produto do %d pelo %d é: %d\n",maior, menor, p);

  return 0;
} 