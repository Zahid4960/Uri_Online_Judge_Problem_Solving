#include <stdio.h>

int main()
{
    double x, y = 0.0;
    int cCount = 0;

    while(1){
        scanf("%lf", &x);

        if((x > 0) && (x <= 10)){
            y += x;
            cCount++;

            if(cCount == 2){
                printf("media = %0.2lf\n", (y / 2.0));
                break;
            }
        }else{
            printf("nota invalida\n");
        }
    }

    return 0;
}