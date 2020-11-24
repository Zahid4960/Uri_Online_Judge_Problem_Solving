#include<stdio.h>

int main()
{
  int i, input;
  int highest = 0;
  int position = 0;

  for (i = 1; i <= 100; i++) {
    scanf("%d", &input);

    if(input >= highest ){
      highest = input;
      position = i;
    }else{
      highest = highest;
      position = position;
    }
  }

  printf("%d\n", highest);
  printf("%d\n", position);
  return 0;
}
