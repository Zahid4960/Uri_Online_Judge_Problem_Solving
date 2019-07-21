#include <stdio.h>

int main(){

	// 2 integers for input variables
	int A, B;

	// read 1044.txt file for test case
	// freopen("1044.txt", "r+", stdin);

	// while loop for running multiole test cases
	// while( scanf("%d %d", &A, &B) == 2){

		// user input for 2 variables
		scanf("%d %d", &A, &B);
		// if we  divide B by A and get reminder 0
		// if we  divide A by B and get reminder 0 
		if( (B % A == 0) || (A % B == 0) ){
			printf("Sao Multiplos\n");
		}else{
			printf("Nao sao Multiplos\n");
		}
	//}	
	
	return 0;
}