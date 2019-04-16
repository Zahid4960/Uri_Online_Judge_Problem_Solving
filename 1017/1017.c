#include <stdio.h>

/*
The summary of the program is user will input the total
time spend in hours and average speed in km/h of the journey. 
now Need to calculate total fuel need for that journey.
given that fuel consumption rate 12 km/L.
*/

int main(){

	int time, averageSpeed;
	float totalDistance;

	scanf("%d", &time); // user input for tatal journey hours
	scanf("%d", &averageSpeed); // average speed for that journey period

	totalDistance = time * averageSpeed; // calculate total distance 

	printf("%0.3f\n",(totalDistance/12)); // calculate total fuel consumption 

	return 0;
}