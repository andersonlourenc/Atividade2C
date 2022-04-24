#include <stdio.h>
#include <string.h>

int main() {
  int num, cont = 0;
 char separador[100];

  printf("Digite um número:\n");
  scanf("%d", &num);

  sprintf(separador,"%d", num);

for( int i=0; i<strlen(separador); ++i){

  printf("%c ",separador[i]);

  if(separador[i] == '7'){

    cont ++;
    printf(" O número inserido tem %d digítos 7\n", cont);
  }    
  }

  return 0;
  } 