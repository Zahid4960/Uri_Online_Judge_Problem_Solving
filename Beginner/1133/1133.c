#include <stdio.h>

int main()
{
  int X, Y, i, A, B;

  scanf("%d %d", &X, &Y);

  if(X <= Y){
    A = X;
    B = Y;
  }else{
    A = Y;
    B = X;
  }

  for(i = A + 1; i < B; i++){
    if((i % 5) == 2 ){
      printf("%d\n", i);
    }else if((i % 5) == 3){
      printf("%d\n", i);
    }
  }

  return 0;
}
