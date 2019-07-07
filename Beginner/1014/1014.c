#include <stdio.h>

int main(){

	int X; // Represents total distance in km (integer value) 
	float Y; // Represents total fuel spent in Litres (floating value)

	scanf("%d %f", &X,&Y); // Takes input for variables X & Y from user

	printf("%0.3f km/l\n", (X/Y)); // X/Y ===> will print the average consumption 

	return 0;
}