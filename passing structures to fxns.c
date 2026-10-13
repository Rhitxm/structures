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


//printing address of five people

#include <stdio.h>
#include<string.h>
struct address{
    int  house_no;
    char block;
    char city[100];
    char state[100];
};
void printAdd(struct address a);

int main() {
    struct address a1={141, 'A', "Pune", "Maharashtra"};
    struct address a2={142, 'B', "Mumbai", "Maharashtra"};
    struct address a3={143, 'C', "Kolkata", "West Bengal"};
    struct address a4={144, 'D', "Chennai", "Tamil Nadu"};
    struct address a5={145, 'E', "Bhuwaneshwar", "Odisha"};

    printAdd(a1);
    printAdd(a2);
    printAdd(a3);
    printAdd(a4);
    printAdd(a5);
    return 0;
}
void printAdd(struct address a){
    printf("Address of five people: \n");
    printf("House No: %d\n", a.house_no);
    printf("Block: %c\n", a.block);
    printf("City: %s\n", a.city);
    printf("State: %s\n", a.state);
    printf("\n\n");
}
