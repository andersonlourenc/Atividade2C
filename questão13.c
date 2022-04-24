#include <stdio.h>

int main() {
  int numa, numb, somat = 0, i;

  printf("Digite o número inicial do intervalo:");
  scanf("%d", &numa);

  printf("Digite o número final do intervalo:");
  scanf("%d", &numb);

  if (numa > numb){
  for(i = numb; i <= numa; i++){

    if(i % 2 == 0){

      printf("%d é par\n", i);
      somat = somat + i;

    }

  }

  printf("O valor do somário é: %d", somat);      

} else if (numb > numa){
   for(i = numa; i <= numb; i++){

    if(i % 2 == 0){

      printf("%d é par\n", i);
      somat = somat + i;

    }

  }

    printf("O valor do somário é: %d", somat);    

}

}