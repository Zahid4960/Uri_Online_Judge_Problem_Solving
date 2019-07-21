#include <stdio.h>

int main(){

	// for storing two floating values of x and y axis
	float x, y;

	// read 1041.txt for test case
	// freopen("1041.txt", "r+", stdin);
	// while loop for running multiple test case
	// while( scanf("%f %f", &x, &y) == 2){
		// user input for values x and y
		scanf("%f %f", &x, &y);

		// if values of x and y equals to 0 then point on origin
		if(x == 0.0 && y == 0.0){
			printf("Origem\n");
		}else if( y == 0.0){ // if y = 0 then point on x axis
			printf("Eixo X\n");
		}else if(x == 0.0){ // if x = 0 then point on y axis
			printf("Eixo Y\n");
		}else if(x > 0.0 && y > 0.0){ // x and y > 0 then Q1
			printf("Q1\n");
		}else if(x < 0.0 && y > 0.0){ // x < 0 and y > 0 then Q2
			printf("Q2\n");
		}else if(x < 0.0 && y < 0.0){ // x < 0 and y < 0 then Q3
			printf("Q3\n");
		}else{
			printf("Q4\n");
		}
	//}

	return 0;
}