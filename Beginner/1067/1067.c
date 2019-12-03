#include <stdio.h>

int main(){

  int input_number, i;

  // freopen("1067.txt", "r+", stdin);

  scanf("%d\n", &input_number);

  for(i = 1; i <= input_number; i++){
    if(i % 2 != 0){
      printf("%d\n", i);
    }
  }

  return 0;
}
