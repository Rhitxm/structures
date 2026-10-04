//used to give alias to our structure

#include<stdio.h>
#include<string.h> 

typedef struct computerenggstudent{
    int roll;
    float cgpa;
    char name[100];
} coe;

int main(){
    coe s1;
    s1.roll=41;
    s1.cgpa=9.67;
    strcpy(s1.name, "Rhitam");

    printf("Student name is: %s\n", s1.name);
    return 0;
}
