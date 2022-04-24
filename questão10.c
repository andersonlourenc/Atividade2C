#include <stdio.h>
#include <math.h>

int main() {

 int nums, pot;

  for( nums = 15; nums <= 90; nums++){
     if (nums % 4 == 0)  {
      pot = pow(nums, 2);
       printf("O múltiplo de 4 é %d e sua potência é %d\n", nums, pot);
  }
    }

  return 0;
}
