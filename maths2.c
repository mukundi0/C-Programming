#include <stdio.h>
#include <math.h>
 
 /*(1^x*y)/z*/
int main(){
    double x,y,z,ans;
    printf("Enter value of x: ");
    scanf("%lf",&x);
    printf("Enter value of y: ");
    scanf("%lf",&y);
    printf("Enter value of z: ");
    scanf("%lf",&z);

    ans = (pow(1,x*y)/z);
    printf("The answer is %.1lf",ans);





    return 0;
}