#include <stdio.h>

int main(){

int A,B,C,D,DIFERENCA;

scanf("%d",&A); // input value of A from user
scanf("%d",&B);	// input value of B from user
scanf("%d",&C);	// input value of C from user
scanf("%d",&D);	// input value of D from user

DIFERENCA = ((A * B) - (C * D)); // Result of difference stored at the variable DIFERENCA

printf("DIFERENCA = %d",DIFERENCA); // Print the result DIFFERENCA

printf("\n"); // New line to eliminate presentation error

	return 0;
}