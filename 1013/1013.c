#include <stdio.h>
#include <math.h>

int main(){

	int a,b,s,greatest;

	scanf("%d%d%d", &a,&b,&s);

	greatest = (a+b+(a*b*s*(a - b))) / 2 ;

	printf("%d eh o maior\n", greatest);

	return 0;

}