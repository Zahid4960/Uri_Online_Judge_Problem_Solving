#include <stdio.h>

int main()
{
    int N, X, Y, tempValue;

    scanf("%d", &N);

    for(int k = 0; k < N; k++){
        
        scanf("%d %d", &X, &Y);

        int Result = 0;

        if(X == Y){
            Result = 0;
        }else if(X > Y){
            X = X;
            Y = Y;
        }else{
            tempValue = X;
            X = Y;
            Y = tempValue;
        }
        
        for(int i = (Y + 1); i < X; i++){
            if((i % 2) != 0){
                Result += i; 
            }
        }

        printf("%d\n", Result);
    }

    return 0;
}