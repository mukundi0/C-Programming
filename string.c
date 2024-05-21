#include <stdio.h>
#include <math.h>

int main(){
    char name[15];
    int year,current_year,age;
    printf("Enter your name\n");
    scanf("%s",name);//get(name)
    printf("Enter your year of birth\n");
    scanf("%i",&year);
    current_year = 2024;
    age = current_year - year;
    printf("My name is %s\nl am %i years old",name,age);

    return 0;


}