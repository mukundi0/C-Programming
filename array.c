#include <stdio.h>

int main(){
   double total_days;
   int j, month, day;

   int days_per_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
   printf("Enter the month (1 to 12)\n");
   scanf("%i",&month);
   printf("Enter the number of day (1 to 30)\n");
   scanf("%i",&day);
        total_days = day;
    for ( j = 0; j < month- 1; j++){
        total_days += days_per_month[j];
    }
    printf("The total days from the start of the year %lf\n", total_days);
    
    
    
    
    return 0;

}