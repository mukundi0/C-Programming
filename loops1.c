#include <stdio.h>
#include <math.h>

int main(){
    int s,c;
    printf("N\t\tSquare\t\tCube\n");
    for (int x = 1; x<=20; x++)
    {
        //printf("%i\t\t%i\t\t%i\n",x,x*x,x*x*x);
        s=pow(x,2);
        c=pow(x,3);
        printf("%i\t\t%i\t\t%i\n",x,s,c);

    }
    








    return 0;
}