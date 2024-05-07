#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    printf("Enter the value of a: ");
    scanf("%i",&a);
    printf("Enter the value of b: ");
    scanf("%i",&b);
    printf("Enter the value of c: ");
    scanf("%i",&c);
    printf("t\t\tae^btsinct\t\tae^btcosct");
    for ( int t = 1; t<=60; t++)
    {
        printf("%i\t\t%lf\t\t%lf\t\t",t,a*exp(b*t)*sin(c*t),a*exp(b*t)*cos(c*t));
    }
    


return 0;
}