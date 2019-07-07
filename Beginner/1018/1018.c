#include <stdio.h>

//userInputAmount = amount that input into the system by client
//note = note value like (100,50,20,10,5,2,1)
//remainingAmount = remaining amount after dividing userInputAmount by note
int userInputAmount, note, remainingAmount;

// function for checking how many notes needed and their reminder
int checker( int userInputAmount, int note){

	printf("%d nota(s) de R$ %d,00\n", (userInputAmount / note), note);
	remainingAmount = userInputAmount % note;
	return remainingAmount;
}


// main function
int main(){
	
	scanf("%d", &userInputAmount); // user input 
	printf("%d\n", userInputAmount); // print the user input amount

	// check for 100 note
	checker(userInputAmount, note = 100);
	// check for 50 note
	checker(remainingAmount, note = 50);
	// check for 20 note
	checker(remainingAmount, note = 20);
	// check for 10 note
	checker(remainingAmount, note = 10);
	// check for 5 note
	checker(remainingAmount, note = 5);
	// check for 2 note
	checker(remainingAmount, note = 2);
	// check for 1 note
	checker(remainingAmount, note = 1);

	return 0;
}