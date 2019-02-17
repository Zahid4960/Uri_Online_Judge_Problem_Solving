#include <stdio.h>

int main(){

	float A,B,C,MEDIA;

	scanf("%f",&A); // input value of A from user
	scanf("%f",&B); // input value of B from user
	scanf("%f",&C); // input value of C from user

	// Weight of A = 2
	// Weight of B = 3
	// Weight of C = 5

	MEDIA = ((A * 2) + (B * 3) + (C * 5)); // Values of A,B and C with their weight stored at variable MEDIA

	printf("MEDIA = %0.1f",MEDIA/(2 + 3 + 5)); // Print the result (Average)

	printf("\n"); // New line to eleminate presentation error

	return 0;
}