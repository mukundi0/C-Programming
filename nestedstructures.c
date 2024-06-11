#include <stdio.h>
#include <string.h>

struct student_address
{
    char city[50];
    char country[50];
};
struct student_data
{
    int student_id;
    int student_age;
    char student_name[50];
    struct student_address address;
}mydata;

int main(void){

    mydata.student_id = 1001;
    mydata.student_age = 12;
    strcpy(mydata.address.country, "Kenya");

    printf("Student origin is %s", mydata.address.country);

    return 0;
}