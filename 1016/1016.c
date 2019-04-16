#include<stdio.h>

/*
The summary of the problem is 
a car takes 2 minutes to complete 
1 km distance.
*/

int main(){

	int distance, minutes;

	scanf("%d", &distance); // takes input from user distance in km

	minutes = distance * 2;  // since i takes 2 minutes to complete 1 km

	printf("%d minutos\n",minutes); // print the output with endline
	
	return 0;
}