#include <stdio.h>

int main()
{
  int initial_value_of_i = 1;
  int initial_value_of_j = 60;

  printf("I=%d J=%d\n", initial_value_of_i, initial_value_of_j);

  do {
    printf("I=%d J=%d\n", (initial_value_of_i += 3), (initial_value_of_j -= 5));
  } while(initial_value_of_j != 0);
  return 0;
}
