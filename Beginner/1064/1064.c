#include <stdio.h>

int main(){

    float number[5];
    int i, counter = 0;
    float sum = 0;

    // freopen("1064.txt", "r+", stdin);

    for(i = 0; i <= 5; i++){
        scanf("%f", &number[i]);

        if(number[i] > 0){
            counter++;
            
            sum += number[i];

            // printf("------------%f\n", sum);
        }
    }

    printf("%d valores positivos\n", counter);
    printf("%0.1f\n", (sum / counter));

    return 0;
}