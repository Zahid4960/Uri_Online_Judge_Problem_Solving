#include<stdio.h>

int main(){

    float salary, salaryAfterIncrement;
    int percentage;

    // raed 1048.txt file for test case
    // freopen("1048.txt", "r+", stdin);

    // while loop for running multiple test case
    // while( scanf("%f", &salary) == 1){

        // user input for salary
         scanf("%f", &salary);
        
        // salary range 0 - 400
        if(salary > 0.00 && salary <= 400.00){
            salaryAfterIncrement = salary + (salary * 0.15); 
            percentage = 15;
        }
        // salary range 400 - 800
        else if(salary > 400.00 && salary <= 800.00){
            salaryAfterIncrement = salary + (salary * 0.12); 
            percentage = 12;
        }
        // salary range 800 - 1200
        else if(salary > 800.00 && salary <= 1200.00){
            salaryAfterIncrement = salary + (salary * 0.10); 
            percentage = 10;
        }
        // salary range 1200 - 2000
        else if(salary > 1200.00 && salary <= 2000.00){
            salaryAfterIncrement = salary + (salary * 0.07); 
            percentage = 7;
        }
        // salary range above 2000
        else{
            salaryAfterIncrement = salary + (salary * 0.04);
            percentage = 4;
        }

        printf("Novo salario: %0.2f\n", salaryAfterIncrement);
        printf("Reajuste ganho: %0.2f\n", salaryAfterIncrement - salary);
        printf("Em percentual: %d %\n", percentage);

    // }

    return 0;
}