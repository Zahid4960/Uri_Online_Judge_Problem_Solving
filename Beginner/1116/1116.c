#include <stdio.h>

int main()
{
  int N, i, X, Y;
  float result;

  scanf("%d", &N);

  for(i = 1; i <= N; i++){
    scanf("%d %d", &X, &Y);

    if(Y == 0){
      printf("divisao impossivel\n");
    }else{
      result = (float)X / (float)Y;
      printf("%0.1lf\n", result);
    }
  }
  return 0;
}
