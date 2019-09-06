#include <stdio.h>

int main(){

    int number[4], i, counter = 0;

    // freopen("1065.txt", "r+", stdin);

    for(i = 0; i <= 4; i++){
        scanf("%d", &number[i]);

        if((number[i] % 2) == 0 || (number[i] == 0)){
            counter++;
        }
    }

    printf("%d valores pares\n", counter);

    return 0;
}