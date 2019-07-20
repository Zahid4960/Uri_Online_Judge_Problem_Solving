#include <stdio.h>

int main(void){
	// a, b, c three variable for inputting three numbers (integer type)
	int a,b,c;
	// d for calculating greatest value from 2 and store it into this varaiable
	int d;
	// read file 1012.txt for test case
	//freopen("1013.txt", "r+", stdin);

	//while loop for running multiple test case
	//while(scanf("%d %d %d", &a, &b, &c) == 3 ){
		// user input for three vriables
		scanf("%d %d %d", &a, &b, &c);

		// if a greater than b
		if(a > b){
			d = ((a + b + (a - b)) / 2);
		}else{
			d = ((a + b + (b - a)) / 2); // if b greater than a
		}

		// if greatest  greater than b
		if(d > c){
			d = ((d + c + (d - c)) / 2);
		}else{
			d = ((d + c + (c - d)) / 2); // c greater than greatest
		}
			// print the greatest value
			printf("%d eh o maior\n", d);
	//}
	
	return 0;
}
