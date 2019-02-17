#include <stdio.h>

int main(){

double R;

scanf("%lf",&R); // input value of R (Radius) from user

printf("VOLUME = %0.3lf",((4.0/3.0) * 3.14159 * (R * R * R))); // print the result (sphere) using formula 4/3 * PI * R^3

printf("\n"); // new line to eliminate presentation error

	return 0;
}