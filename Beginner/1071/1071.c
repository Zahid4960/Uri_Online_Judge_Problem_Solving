#include <stdio.h>

int main()
{
  int X, Y, sum = 0, i;

  // input values
  scanf("%d %d", &X, &Y);

  for(i = X; i > Y; i--){
    if(i%2 == 0){
      sum = sum;
    }else{
      sum += i;
    }
  }

  printf("%d\n", sum);

  return 0;
}
