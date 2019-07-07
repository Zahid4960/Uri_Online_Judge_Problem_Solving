#include<stdio.h>

int main(){

	int X,Y;
	// Y = product id
	// Y = number of product purchase 
	float total;
	// total variable is used to calculate total amount in float and store that value into it

	scanf("%d %d", &X, &Y);
	// user input for product id and number of product purchase 

	switch(X){

		case 1:
			total = 4 * Y; // for product it 1 price will 4.00 R$
			break;

		case 2:
			total = 4.50 * Y; // for product it 2 price will 4.50 R$
			break;

		case 3:
			total = 5 * Y; // for product it 3 price will 5.00 R$
			break;	

		case 4:
			total = 2 * Y; // for product it 4 price will 2.00 R$
			break;

		default:
			total = 1.50 * Y; // for product it 5 price will 1.50 R$
	}

	printf("Total: R$ %0.2f\n", total); // print the total amount with 2 decimal point 

	return 0;
}