#include<stdio.h>

int main()
{
  int N, i, X;
  int in = 0;
  int out = 0;

  scanf("%d", &N);

  for(i = 1; i <= N; i++){

    scanf("%d", &X);

    if(X >= 10 && X <= 20 && X != 0){
      in += 1;
    }else{
      out += 1;
    }
  }

  printf("%d in\n", in);
  printf("%d out\n", out);

  return 0;
}
