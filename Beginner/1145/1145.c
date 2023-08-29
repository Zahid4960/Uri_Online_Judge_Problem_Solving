#include <stdio.h>

int main()
{
    int X, Y, J = 1;

    scanf("%d %d", &X, &Y);

    for(int i = 1; i <= Y; i++){
        if(J == X){
            printf("%d\n", i);
            J = 1;
        }else{
             printf("%d ", i);
             J++;
        }
    }

    return 0;
}