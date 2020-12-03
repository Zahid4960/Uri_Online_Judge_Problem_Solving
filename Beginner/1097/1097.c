#include <stdio.h>

int main()
{
  int i, I, J = 7;

  for (i = 1; i <= 9; i++) {
    if(i % 2 != 0){
      printf("I=%d J=%d\n", i, J);
      printf("I=%d J=%d\n", i, J - 1);
      printf("I=%d J=%d\n", i, J - 2);
      J += 2;
    }
  }
  return 0;
}
