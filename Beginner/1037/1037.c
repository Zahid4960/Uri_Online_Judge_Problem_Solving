#include <stdio.h>

int main(){

float x; 
// x = input a floating number between 
//0 to 100 and store that into x variable

// read file 1037.txt for test case run
//freopen("1037.txt", "r+", stdin);

// while loop for running multiple test case 
//while(scanf("%lf", &x) == 1){

	scanf("%f", &x);
	// user input for x variable


	// if x less than 0 and greater than 100
	// then it will print following message
	if(x < 0.0 || x > 100.00){
		printf("Fora de intervalo\n");
	}else{
		// if x greater than or equal to less than or equal to 25.00
		if((x >= 0.0) && (x <= 25.00)){
			printf("Intervalo [0,25]\n");
		}else if((x > 25.00) && (x <= 50.00)){ // if x greater than or equal to 25 and  less than or equal to 50
			printf("Intervalo (25,50]\n");
		}
		else if((x > 50.00) && (x <= 75.00)){ // if x greater than or equal to 50 and  less than or equal to 75
			printf("Intervalo (50,75]\n");
		}else if((x > 75.00) && (x <= 100.00)){ // if x greater than or equal to 75 and  less than or equal to 100
			printf("Intervalo (75,100]\n");
		}
	}

//}

	return 0;
}