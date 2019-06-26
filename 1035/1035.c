#include <stdio.h>

int main(){

	// A,B,C,D all four variables are to store four values 
	int A,B,C,D;

	// user input for A,B,C,D 
	scanf("%d%d%d%d", &A,&B,&C,&D);

	// if value B greater than value C
	// if value D > than value A
	// if sum of value C & D is greater than sum of value A & B
	// if C & D is postive means greater than 0
	// if  A is an even value
	if ((B > C) && (D > A) && (C + D) > (A + B) && (C && D) > 0 && (A % 2) == 0){
		// if all the above condition satisfies then print this
		printf("Valores aceitos\n");
	}else{
		// if all the above clause not satisfied then print this
		printf("Valores nao aceitos\n");
	}

	return 0;
}