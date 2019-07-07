#include <stdio.h>

int main(){

	int product_code1;
	int product_code2;
	int quantity_for_product1;
	int quantity_for_product2;

	float product_price1;
	float product_price2;

	scanf("%d %d %f",&product_code1,&quantity_for_product1,&product_price1); // input value of product code1, quantity for product1 and product price1 from user;
	scanf("%d %d %f",&product_code2,&quantity_for_product2,&product_price2); // input value of product code2, quantity for product2 and product price2 from user;

    printf("VALOR A PAGAR: R$ %0.2lf",(quantity_for_product1 * product_price1) + (quantity_for_product2 * product_price2));	// print the value of total to pay

    printf("\n"); // new line to eliminate presentation error

	return 0;
}