#include <stdio.h>

int main(){

	// three floating points for three variables
	float A, B, C;

	// read 1043.txt file  for test case
	//freopen("1043.txt", "r+", stdin);

	// while loop for running multiple test cases
	//while( scanf("%f %f %f", &A, &B, &C) == 3 ){

		// user input for A, B, C
		scanf("%f %f %f", &A, &B, &C);

		// if B+C > A then a triangle can have perimeter
		if( (B + C) > A && (A + C) > B && (A + B) > C ){
			printf("Perimetro = %0.1f\n", (A + B + C));
		}else{
			// else will calculate the area of a trapezium
			// formula area = ((a+b)/2)*h
			printf("Area = %0.1f\n", (((A + B) / 2.0) * C));
		}
	//} 

	return 0;
}