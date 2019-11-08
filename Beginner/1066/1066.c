#include <stdio.h>

int main()
{
 int input, i;
 int positive_counter = 0; 
 int negative_counter = 0;
 int even_counter = 0;
 int odd_counter = 0;
 
//  freopen("1066.txt", "r+", stdin);

 for(i = 0; i < 5; i++){
  scanf("%d", &input);
  if(input > 0){
   positive_counter++;
  }else{
   if(input != 0){
    negative_counter++;
   }
  }
  
  if(input % 2 == 0){
   even_counter++;
  }else{
   odd_counter++;
  }
 }
 
 printf("%d valor(es) par(es)\n", even_counter);
 printf("%d valor(es) impar(es)\n", odd_counter);
 printf("%d valor(es) positivo(s)\n", positive_counter);
 printf("%d valor(es) negativo(s)\n", negative_counter);
 
 return 0;
}