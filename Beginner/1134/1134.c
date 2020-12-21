#include <stdio.h>

int main()
{
  int user_input;
  int alcohol = 0;
  int gasoline = 0;
  int diesel = 0;

  while(1){
      scanf("%d", &user_input);

      if(user_input == 1)
        alcohol += 1;

      else if(user_input == 2)
        gasoline += 1;

      else if(user_input == 3)
        diesel += 1;

      else if(user_input == 4)
        break;      
  }

  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", alcohol);
  printf("Gasolina: %d\n", gasoline);
  printf("Diesel: %d\n", diesel);

  return 0;
}
