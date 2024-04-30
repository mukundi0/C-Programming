#include <stdio.h>

int main(){

    int mean,index;
    printf("Enter Mean Grade to find graduation classification:\n");
    scanf("%d",&mean);
        index = mean/10;

    switch (index)
    {
    case 10:
    case 9:
    case 8:
    case 7:
        printf("First Class Honour\n");
        break;
    case 6:
        printf("2nd Class Upper Div\n");
        break;

    case 5:
        printf("Second Upper Division\n");
        break;

    case 4:
        printf("Pass\n");
        break;
   
    default:
     printf("Invalid classification");
        break;
    }

}

