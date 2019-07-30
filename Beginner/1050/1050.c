#include<stdio.h>

int main(){

    int DDD;
    
    // we can use map as an alternative for cpp
    // map<int, string> city_code;
    // city_code[61] = "Brasilia";
    // city_code[71] = "Salvador";
    // city_code[11] = "Sao Paulo";

    // read 1050.txt file for test case
    // freopen("1050.txt", "r+", stdin);

    // while loop for running multiple test case
   // while( scanf("%d", &DDD) == 1 ){

        // user input for destination code
        scanf("%d", &DDD);

        if(DDD == 61){
            printf("Brasilia\n");
        }else if(DDD == 71){
            printf("Salvador\n");
        }else if(DDD == 11){
            printf("Sao Paulo\n");
        }else if(DDD == 21){
            printf("Rio de Janeiro\n");
        }else if(DDD == 32){
            printf("Juiz de Fora\n");
        }else if(DDD == 19){
            printf("Campinas\n");
        }else if(DDD == 27){
            printf("Vitoria\n");
        }else if(DDD == 31){
            printf("Belo Horizonte\n");
        }else{
            printf("DDD nao cadastrado\n");
        }
   // }

    return 0;
}