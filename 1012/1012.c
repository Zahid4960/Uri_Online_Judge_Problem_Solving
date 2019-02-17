#include<stdio.h>

int main(){

float A,B,C;

scanf("%f%f%f",&A,&B,&C);

printf("TRIANGULO: %0.3f\n", (0.5 * A * C)); // Area of a triangle = 0.5 * base * height
printf("CIRCULO: %0.3f\n", (3.14159 * (C * C))); // Area of a circle = pi * radius ^ 2
printf("TRAPEZIO: %0.3f\n", (0.5 * (A + B) * C)); // Area of a trapezium = 0.5 * sum of parallel sides * distance between them
printf("QUADRADO: %0.3f\n", (B * B)); // Area of a square = length ^ 2
printf("RETANGULO: %0.3f\n", (A * B)); // Area of a rectangle = length * width
	
return 0;

}