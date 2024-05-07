#include <stdio.h>

int main(){

    int mean,index;
    printf("Enter Mean Grade to find graduation classification:\n");
    scanf("%d",&mean);

    if (mean>70 && mean<=100)
    {
        printf("First Class Honours\n");
    }
    else if (mean>60 && mean<=70)
    {
        printf("Second Upper Division\n");
    }
    else if (mean>50 && mean<=60)
    {
        printf("Second Lower Division\n");
    }
    else if (mean>40 && mean<=50)
    {
        printf("Pass\n");
    }

    else
        printf("lnvalid Classification");

    return 0;
}