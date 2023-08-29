#include <stdio.h>

int main()
{
    int A, N, Result = 0;

    scanf("%d %d", &A, &N);

    while(N <= 0){
        scanf("%d", &N);
    }

    for(int i = 0; i < N; i++){
        Result += A + i;
    }

    printf("%d\n", Result);

    return 0;
}