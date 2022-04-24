#include <stdio.h>

int main(){

  int dia;
  printf("\nDigite um número (1-7) que corresponde ao dia da semana:\n");
  scanf("%d", &dia);
  
  switch (dia){
    case 1:
      printf("Domingo\n");
      break;

    case 2:
      printf("Segunda\n");
      break;

    case 3:
      printf("Terça\n");
      break;

    case 4:
      printf("Quarta\n");
      break;

    case 5:
      printf("Quinta\n");
      break;

    case 6:
      printf("Sexta\n");
      break;

    case 7:
      printf("Sabádo\n");
      break;
    
    default:
      
      printf("Esse número não é um dia válido!\n");
    }
  
  return 0;
}