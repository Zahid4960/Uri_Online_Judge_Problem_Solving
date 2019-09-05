#include <stdio.h>

int main(){

	int number;

	for ( number= 2; number <= 100; number++){
		if((number % 2) == 0){
			printf("%d\n", number );
		}
	}

	return 0;
}