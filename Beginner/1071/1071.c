#include <stdio.h>

int main()
{
    int X, Y, Result = 0;

    scanf("%d %d", &X, &Y);

    if(X == Y){
       Result = 0;
    }else if(X > Y){
        X = X;
        Y = Y;
    }else{
        X = Y;
        Y = X;
    }

    for(int i = Y + 1; i < X; i++){
        if((i % 2) != 0){
            Result += i; 
        }
    }

     printf("%d\n", Result);

    return 0;
}