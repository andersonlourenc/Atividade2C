#include <stdio.h>

int main(){
  float compra, entrada;
  int parcela;


 printf("Insira o valor da compra:\n");
 scanf("%f", &compra);


 parcela = compra/3;

 entrada = compra - (2*parcela);

 if(compra > 0){

   printf("Entrada vai ser:  R$ %.2f\n", entrada);
   printf("O valor das duas parcela será: R$ %d\n", parcela);

   }

  return 0;
}