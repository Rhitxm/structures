//printing student information with structure of arrays

#include<stdio.h>
#include<string.h> 

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student AURO[100];

    AURO[0].roll=41;
    AURO[0].cgpa=9.67;
    strcpy(AURO[0].name, "Rhitam");

    printf("student name=%s\n", AURO[0].name);
    printf("student roll=%d\n", AURO[0].roll);
    printf("student cgpa=%f\n", AURO[0].cgpa);

    return 0;
}

