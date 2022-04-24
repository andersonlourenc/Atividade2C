#include <stdio.h>

int main() {

  int numa, numb, i;

  printf("Digite o incio do intervalo:\n");
  scanf("%d", &numa);

  printf("Digite o final do intervalo:\n");
  scanf("%d", &numb);


  if (numa > numb){
  for(i = numb; i <= numa; i++){

    if(i % 3 == 0){

  printf("%d e divisivel por 3\n", i);


    }

  }

} else if (numb > numa){
   for(i = numa; i <= numb; i++){

    if(i % 3 == 0){

    printf("%d e divisivel por 3\n", i);

    }

  }
  return 0;
}
}