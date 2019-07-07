#include <stdio.h>

int main(){

	// days variable to store days into it (user input)
	// months variable to store months into it
	// years variable to store years into it
	int days, months, years;

	// user input for variable days
	scanf("%d", &days);

	// 1 year = 365 days by using that we can find value of years
	years = days / 365;
	// after calculating years remaining days will be stored into days
	days %= 365;
	// 1 month = 30 days by using that we can find value of months
	months = days / 30;
	// after calculating months remaining days will be stooed into days
	days %= 30;

	// print years
	printf("%d ano(s)\n", years);
	// print months
	printf("%d mes(es)\n", months);
	// print days
	printf("%d dia(s)\n", days);

	return 0;
}