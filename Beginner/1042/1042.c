#include <stdio.h>

int main(){

	// variables for storing 3 integers
	int a, b, c;

	// read file 1042.txt for test case
	//freopen("1042.txt", "r+", stdin);

	// while loop for running multiple test cases
	//while( scanf("%d %d %d", &a, &b, &c) == 3 ){

		// user input for 3 integers
		scanf("%d %d %d", &a, &b, &c);

		// if a is the smallest one 
		if(a < b && a < c){
			// print value of a
			printf("%d\n", a);
			// if between b and c, b smallest then
			if(b < c){
				// print value of b
				printf("%d\n", b);
				// print value of c
				printf("%d\n", c);
			}else{
				// print value of c
				printf("%d\n", c);
				// print value of b
				printf("%d\n", b);
			}
		}

		// if b is the smallest one 
		if(b < a && b < c){
			// print value of b
			printf("%d\n", b);
			// if between a and c, a smallest then
			if(a < c){
				// print value of a
				printf("%d\n", a);
				// print value of c
				printf("%d\n", c);
			}else{
				// print value of c
				printf("%d\n", c);
				// print value of a
				printf("%d\n", a);
			}
		}

		// if c is the smallest one 
		if(c < a && c < b){
			// print value of c
			printf("%d\n", c);
			// if between a and b, a smallest then
			if(a < b){
				// print value of a
				printf("%d\n", a);
				// print value of b
				printf("%d\n", b);
			}else{
				// print value of b
				printf("%d\n", b);
				// print value of a
				printf("%d\n", a);
			}
		}

		// balnak line print
		printf("\n");
		// print value of a 
		printf("%d\n", a);
		// print value of b 
		printf("%d\n", b);
		// print value of c 
		printf("%d\n", c);
		 
	//}

	return 0;
		
}