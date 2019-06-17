#include <stdio.h>

int amount1, amount2;

int checker( int note){
	amount1 /= note;
	amount2 =  amount1;
	printf("%d nota(s) de R$ %d,00\n", amount1, note);
}



int main()
{
	
	
	scanf("%d", &amount1); // user input for total amount

	printf("%d\n", amount1); // print the user input amount

	checker(100);
	amount2 %= 100;
	amount1 = amount2;

	checker(50);
	amount2 %= 50;
	amount1 = amount2;

	checker(20);
	amount2 %= 20;
	amount1 = amount2;

	checker(10);
	amount2 %= 10;
	amount1 = amount2;

	checker(5);
	amount2 %= 5;
	amount1 = amount2;
	
	checker(2);
	amount2 %= 2;
	amount1 = amount2;
	
	checker(1);
	amount2 %= 1;
	amount1 = amount2;
	
	return 0;
}