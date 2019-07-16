#include <stdio.h>
#include <math.h>

int main(){

	//three floating points
	float A,B,C, PositiveSign, NegativeSign, DivideBy;  

	// read file 1036.txt for test case
	//freopen("1036.txt", "r+", stdin);

	// user input for three floating points
	//while(scanf("%f %f %f", &A, &B, &C) == 3){
		 scanf("%f %f %f", &A, &B, &C);

		/*
		Bhaskara's formula or quadtratic equations:
		x = -b + square root(b square - 4ac) / 2a or
		x = -b - square root(b square - 4ac) / 2a
		*/

		PositiveSign = (-B + sqrt(  (B * B) - (4 * A * C) ));
		NegativeSign = (-B - sqrt(  (B * B) - (4 * A * C) ));
		DivideBy = 2 * A;


		if(PositiveSign == 0.0 || NegativeSign == 0.0 || DivideBy == 0.0 || ((B * B) - (4 * A * C)) < 0 ){
			printf("Impossivel calcular\n");
		}else{
			// for positive sign
			printf("R1 = %0.5f\n", PositiveSign / DivideBy);
			// for taking negative sign
			printf("R2 = %0.5f\n", NegativeSign / DivideBy);	
		}
	//}

	return 0;
}