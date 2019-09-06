#include <stdio.h>

int main(){
    float number[5];
    int i, counter = 0;

    // freopen("1060.txt", "r+", stdin);

    for(i = 0; i <= 5; i++){
        scanf("%f", &number[i]);
        if(number[i] > 0){
            counter ++;
        }
    }

    printf("%d valores positivos\n", counter);
    
    return 0;
}