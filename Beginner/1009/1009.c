#include <stdio.h>


int main(){

	char name;
	double fixed_salary,sale;

	scanf("%s",&name); // input employee first name from user
	scanf("%lf",&fixed_salary);  // input employee fixed salary from user
	scanf("%lf",&sale); // input employee total sale for the month from user

	printf("TOTAL = R$ %0.2lf",(fixed_salary + (sale * 0.15))); // print total salary with 15% sale bonous

	printf("\n"); // new line to eliminate presentation error

	return 0;
}