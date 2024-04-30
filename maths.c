#include <stdio.h>
#include <math.h>

int main() {

    /*Write a complete C program that prompts the user for the Cartesian coordinates of two 
    prompt (x1,y1) & (x2,y2) and displays the distance between them.*/
    int x1,x2,y1,y2;
    double d;
    printf("Enter x1: ");
    scanf("%d",&x1);
    printf("Enter x2: ");
    scanf("%d",&x2);
    printf("Enter y1: ");
    scanf("%d",&y1);
    printf("Enter y2: ");
    scanf("%d",&y2);

    d = sqrt(pow(x1-x2,2)-pow(y1-y2,2));
    printf("The distance is %f",d);

    /*OR
    d = sqrt((x1-x2)^2-(y1-y2)^2);*/








return 0;
}