#include <stdio.h>

int main()

{

    double a, b, c, temp;

    // read file 1045.txt for test case
    // freopen("1045.txt", "r+", stdin);

    // while loop for running multiple test case
    // while(scanf("%lf %lf %lf", &a, &b, &c) == 3){

        scanf("%lf %lf %lf", &a, &b, &c);

        if (a < b)

        {
            temp = a;
            a = b;
            b = temp;
        }

        if (b < c)

        {
            temp = b;
            b = c;
            c = temp;
        }

        if (a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }

        // if A ≥ B + C, write the message: NAO FORMA TRIANGULO
        if (a >= b + c){
            printf("NAO FORMA TRIANGULO\n");
        }
        // if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
        else if (a * a == b * b + c * c) {
            printf("TRIANGULO RETANGULO\n");
        }
        // if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
        else if (a * a > b * b + c * c) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        // if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
        else if (a * a < b * b + c * c){
            printf("TRIANGULO ACUTANGULO\n");
        }

        // if the three sides are the same size, write the message: TRIANGULO EQUILATERO
        if (a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        }

        // if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES
        else if (a == b || b == c){
            printf("TRIANGULO ISOSCELES\n");
        }

    // }
    
    return 0;

}