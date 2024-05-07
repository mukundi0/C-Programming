#include <stdio.h>

/*Design a program to compute a week salary for an hourly employee. Assume that the firm pays an overtime rate is 1.5 extra the regular rate for all hours after the 1st 40 hours worked, then the wage calculation will be as followings:
 if(hours>40)
  	gross_pay = rate*40+1.5*rate*(hours-40);
 else
  	gross_pay = rate*hours;*/

int main(){
    int hours;
    printf("Entere the numer of hours: ");
    scanf("%d",&hours);

    int rate = 7;

    double gross_pay;

    if (hours>40)
    {
        gross_pay = (rate*40) + (1.5*rate*(hours-40));
    }
    else
    {
        gross_pay = rate*hours;
    }
    printf("Your weekly pay is %lf", gross_pay);
    











    return 0;
}