/*A set of two linear equations with two unknown x1 and x2 is given below. 
 ax1 + bx2 = m 
 cx1+ dx2 = n 
 
 The set has a unique solution:
 x1 = md - bn/ ad - cb
 x2 = na - mc/ad - cb

Provided the denominator ad-cb is not equal to zero 
While a program that will read the values of constants a,b,c,d,m and n and compute the 
values of x1 and x2. An appropriate messages should be printed if ad-cb = 0. 
*/

#include<stdio.h>

int main(void){

    double a,b,c,d,m,n;
    double x1,x2;
    double denominator;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the value of c: ");
    scanf("%f", &c);

    printf("Enter the value of d: ");
    scanf("%f", &d);

    printf("Enter the value of m: ");
    scanf("%f", &m);

    printf("Enter the value of n: ");
    scanf("%f", &n);

    denominator = ((a * d) - (c * b));


    if (denominator == 0)
    {
        printf("The denominator is equal to zero, therefore the system cannot compute");
    }
    else
    {
        x1 = ((m * d) - (b * n)) / denominator;
        x2 = ((n * a) - (m * c)) / denominator;

        printf("The value of x1 is: %lf\n");
        printf("The value of x2 is: %lf\n");
    }
    





    return 0;
}