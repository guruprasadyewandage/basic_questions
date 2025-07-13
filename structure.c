// basic structure code
#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    float per;
    char name[15];
};
int main(){
    struct student s1;
    s1.rollno = 100;
    s1.per =85.5;
    strcpy(s1.name, "xyz");

    printf("Student Details:\n");
    printf("Roll No: %d\n", s1.rollno);
    printf("Name   : %s\n", s1.name);
    printf("Percent: %.2f\n", s1.per);
    return 0;
}
