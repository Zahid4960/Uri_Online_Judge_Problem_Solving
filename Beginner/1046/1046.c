#include <stdio.h>

int main(){

    int hourStart, hourEnd, duration, interval;

    // read 1046.txt file for test case
    // freopen("1046.txt", "r+", stdin);

    // while loop for running multiple test case
    // while( scanf("%d %d", &hourStart, &hourEnd) == 2){

        // user input 
        scanf("%d %d", &hourStart, &hourEnd);

        // calculate duration
        interval = hourEnd - hourStart;

        // if duration 0
        if(interval == 0){
            printf("O JOGO DUROU 24 HORA(S)\n");
        }

        // if duration < 0
        if(interval < 0){
            duration = 24 - hourStart;
            duration += hourEnd;

            printf("O JOGO DUROU %d HORA(S)\n", duration);
        }
        
        // if duration > 0
        if(interval > 0){
            printf("O JOGO DUROU %d HORA(S)\n", interval);
        }
    // }

    return 0;
}