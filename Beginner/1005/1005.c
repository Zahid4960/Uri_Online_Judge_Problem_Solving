#include <stdio.h>


int main(){

	double A,B,MEDIA;

	scanf("%lf",&A); // input value of A from user
	scanf("%lf",&B); // input value of B from user

	// Weight of A = 3.5
	// weight of B = 7.5

	MEDIA = ((A * 3.5) + (B * 7.5)); // Values of A and B with their weight stored at variable MEDIA

	printf("MEDIA = %0.5lf",MEDIA/(3.5 + 7.5)); // Print the result (Average)

	printf("\n"); // New line to eleminate presentation error

	return 0;
}