#include <stdio.h>

int main() {

  float fahrenheit, celsius, i;

  for( celsius = 10; celsius <= 100; celsius += 10){

     fahrenheit = (celsius * 1.8) + 32;

    printf("Temperatura em  °C: %.2f\n", celsius);
    printf("Temperatura em  Fahrenheit: %.2f\n", fahrenheit);
    puts(" ");

  }

  return 0;
} 