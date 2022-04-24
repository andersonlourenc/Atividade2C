#include <stdio.h>
#include <math.h>

int main() {

 int numa, numb, potencia;

 printf("Digite o primeiro número:\n");
 scanf("%d", &numa);

printf("Digite o segundo número:\n");
 scanf("%d", &numb);

  if( numa > numb){

  for( int i = numa ; i >= numb; i--){
     if (i % 4 == 0)  {
      potencia = pow(i, 2);
       printf("múltiplo 4 é %d e sua potência é %d\n", i, potencia);
  }
    }
  }

 if (numb > numa){

   for(int i = numb ; i >= numa; i--){
     if (i % 4 == 0)  {
      potencia = pow(i, 2);
       printf("múltiplo 4 é %d e sua potência é %d\n", i, potencia);
  }
    }
  }

  return 0;
}
