#include <stdio.h>

//Creating the structure
struct studentdata
{
    int student_id;
    int student_age;
    char* student_name;
    
};


int main(void){

//student is the variable of structure studentdata
struct studentdata student;

//Assigning the values of each struct member here
student.student_name = "Mukundi";
student.student_age = 19;
student.student_id = 190044;

//Displaying the v alues of struct members
printf("Student Name is: %s\n", student.student_name);
printf("Student ld is: %d\n", student.student_id);
printf("Student Age is: %d\n", student.student_age);

return 0;    
}