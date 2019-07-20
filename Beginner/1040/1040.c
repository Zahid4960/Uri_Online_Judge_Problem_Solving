#include<stdio.h>

int main(){

	// n1, n2, n3, n4 all four represents four scores obtained by students
	float n1, n2, n3, n4;
	// variable average to store avaerage score
	float average;
	// variable FinalAverage to store final average score
	float FinalAverage;

	// read file 1040.txt for test case
	//freopen("1040.txt", "r+", stdin);

	// while loop for runnung multiple test case
	//while(scanf("%f %f %f %f", &n1, &n2, &n3, &n4) == 4){
		// user input for scores
		 scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
		// added weight to all the four variables
		n1 *= 2;
		n2 *= 3;
		n3 *= 4; 
		n4 *= 1;

		// calculate average of four scores
		average = ((n1 + n2 + n3 + n4) / (2 + 3 + 4 + 1));

		// print averge
		printf("Media: %0.1f\n", average);

		// if average score 7 or more then this message
		if(average >= 7.0){
			printf("Aluno aprovado.\n");
		}else if(average >= 5.0 && average <= 5.9){
			printf("Aluno em exame.\n"); // if average between 5 t0 6.9
			// variable to store Rescore 
			float ReScore; 
			// user input for Rescore
			scanf("%f", &ReScore); 

			// print ReScore value 
			printf("Nota do exame: %0.1f\n", ReScore);
			
			// calculate FinalAverage
			FinalAverage = ((average + ReScore) / 2);

			// If FinalAverage equal or greater than 5 
			if(FinalAverage >= 5.0){
				printf("Aluno aprovado.\n");
			}else{
				printf("Aluno reprovado.\n");
			}

			// print final score
			printf("Media final: %0.1f\n", FinalAverage);
		}else{
			printf("Aluno reprovado.\n");
		}
	//}
	return 0;
}