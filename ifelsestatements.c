#include <stdio.h>

int main(){

int age;

printf("Enter the age to determine if you are a CHILD or ADULT: ");
scanf("%d",&age);

if(age>=18)
printf("Adult");
else
printf("Child");




return 0;
}