//print student information

#include<stdio.h>
#include<string.h> 

struct student{
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s1);

int main(){
    struct student s1={"Rhitam", 41, 9.7};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1){
    printf("Student info:\n");
    printf("student name: %s\n", s1.name);
    printf("student roll: %d\n", s1.roll);
    printf("student cgpa: %f\n", s1.cgpa);
}
