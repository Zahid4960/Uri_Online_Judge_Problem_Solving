#include <stdio.h>
#include<math.h>

/*
Formula for finding distance between two points
distance = square_root(x1-x2)^2 + (y1-y2)^2
*/

int main(){

	double x1,x2,y1,y2; // here p1(x1,y1) and p2(x2,y2)
	double Distance; // Distance between two points p1 and p2 will be calculated and stored here

	scanf("%lf %lf", &x1,&y1); // Takes input from user for p1(x1,y1)
	scanf("%lf %lf", &x2,&y2); // Takes input from user for p2(x2,y2)

	Distance = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) ); 

	printf("%0.4lf\n", Distance);

	return 0;
}