#include <stdio.h>
#include <math.h>

int main(){

	float salary, taxes;

	// freopen("1051.txt", "r+", stdin);

	//  while( scanf("%f", &salary) == 1){

	    scanf("%f", &salary);

		if(salary <= 2000){
			printf("Isento\n");
		}else if(salary <= 3000){
			taxes = (salary - 2000) * 0.08;
			printf("R$ %0.2f\n", taxes);
		}else if(salary <= 4500){
			taxes = (1000 * 0.08 + ((salary - 3000) * 0.18));
			printf("R$ %0.2f\n", taxes);
		}else{
			taxes = (1000 * 0.08) + (1500 * 0.18) + ((salary - 4500) * 0.28);
			printf("R$ %0.2f\n", taxes);
		}

	// }

	
	return 0;
}