#include <stdio.h>

int main()
{
  int input_password, correct_password = 2002;

  while(1){
    scanf("%d", &input_password);
    if(input_password == correct_password){
        printf("Acesso Permitido\n");
        break;
    }else{
        printf("Senha Invalida\n");
    }
  }

  return 0;
}
