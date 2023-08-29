#include <stdio.h>

int main()
{
    int M, N, temp, Result = 0;

    while(1){

        scanf("%d %d", &M, &N);

        if((M <= 0) || (N <= 0)){
            break;
        }else if(M <= N){
            M = M;
            N = N;
        }else{
            temp = M;
            M = N;
            N = temp;
        }

        for(int i = M; i <= N; i++){
            printf("%d ", i);
            Result += i;
        }

         printf("Sum=%d\n", Result);

         Result = 0;
    }

    return 0;
}