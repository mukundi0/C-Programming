#include <stdio.h>

int main(){

int age;

printf("Enter the age: ");
scanf("%d",&age);

if(age>0 && age<5)
    printf("lnfant\n");
else if(age>5 && age<=12)
    printf("Child\n");
else if(age>12 && age<=19)
    printf("Teen\n");
else if(age>19 && age<=35)
    printf("Youth\n");
else if(age>35 && age<=50)
    printf("Adult\n");
else if(age>50 && age<=65)
    printf("Middle Age\n");
else if(age>65 && age<=120)
    printf("Senior Citizen\n");
else
    printf("Invalid age bracket");

return 0;








}