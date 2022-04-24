#include <stdio.h>
#include <math.h>

int main() {
  int nums, reserva, troca; 


  do{
 printf("Informe um número de cinco dígitos: ");
  scanf("%d", &nums);

  reserva = nums;
  troca = 0;

  while ( reserva != 0) {

    troca = troca * 10 + reserva % 10;

    reserva = reserva / 10;

     int abs(int reserva);
  }

  if (troca == nums)
    printf("%d é palindrome\n", nums);
  else
    printf("%d não é palindrome\n", nums);

   } while( nums >= 0); 

  return 0;
}