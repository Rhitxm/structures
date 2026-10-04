//to print details of a student 

#include<stdio.h>
#include<string.h> 

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1={"Rhitam", 41, 9.7};
    printf("Student name: %s\n", s1.name);

    return 0;
}
