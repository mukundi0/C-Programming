#include<stdio.h>
#include<math.h>

int main(){
    float side1, side2, side3;

    printf("Enter length of side 1:");
    scanf("%f",&side1);
    printf("Enter length of side 2:");
    scanf("%f",&side2);
    printf("Enter length of side 3:");
    scanf("%f",&side3);

    if (side1 == side2 && side2 == side3)
    {
        printf("Equilateral triangle\n");
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        printf("Isoscles triangle");
    }
    else
    {
        printf("Neither");
    }
    
    
    

    return 0;
    
}