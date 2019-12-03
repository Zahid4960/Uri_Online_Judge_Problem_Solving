#include<stdio.h>

int main(){

  int input_number;
  int counter = 0;
  int i;

  // freopen("1070.txt", "r+", stdin);

  scanf("%d\n", &input_number);

  while(counter != 6){
    if(input_number % 2 != 0){
      printf("%d\n", input_number);
      input_number += 2;
      counter++;
    }else{
      input_number += 1;
      // counter = counter;
    }
  }
  return 0;
}
