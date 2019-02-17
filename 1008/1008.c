#include <stdio.h>

int main(){

int number,work_hour;
float salary_per_hour;

scanf("%d",&number); // input employee number from user
scanf("%d",&work_hour); // input employee work hour from user
scanf("%f",&salary_per_hour); // input employee salary per hour from user

printf("NUMBER = %d\n",number); // print employee number

printf("SALARY = U$ %0.2f",(work_hour * salary_per_hour)); // print employee total salary

printf("\n"); // new line to eliminate presentation error
	return 0;
}