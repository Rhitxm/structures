//print the details of the students using pointers in structures

#include<stdio.h>
#include<string.h> 

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    // struct student s1={"Rhitam", 41, 9.7};
    // printf("Student name: %s\n", s1.name);

    struct student *ptr=&s1;
    printf("student name: %s\n", (*ptr).name);

    return 0;
}
