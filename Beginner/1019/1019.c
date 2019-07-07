#include <stdio.h>

int main(){

	// N variable will be used for store seconds value (user input)
	int N, hours, minutes;
	// hours variable will be used for store hours value
	// minutes variable will be used for store minutes value
	
	// user input for variable N
	scanf("%d", &N);

	// 1 hour = 3600 seconds by using that we  value of hours 
	hours = N / 3600;
	// after calculating hours remaining seconds will be stored into N
	N %= 3600;

	// 1 minutes = 60 seconds by using that we find value of minutes
	minutes = N / 60;
	// after calculating minutes remaining seconds will be stored into N
	N %= 60;

	printf("%d:%d:%d\n", hours,minutes,N);

	return 0;
}