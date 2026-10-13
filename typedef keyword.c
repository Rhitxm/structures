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

//storing bank account information of customers

#include <stdio.h>
#include<string.h>
typedef struct BankAccount{
    int accountNo;
    char name[100];
}acc;
int main(){
    acc acc1={123, "Rhitam"};
    acc acc2={124, "Sumedh"};
    acc acc3={125, "Atharv"};

    printf("acc no= %d\n", acc1.accountNo);
    printf("name= %s", acc1.name);
    printf("\n\n");
    printf("acc no= %d\n", acc2.accountNo);
    printf("name= %s", acc2.name);
    printf("\n\n");
    printf("acc no= %d\n", acc3.accountNo);
    printf("name= %s", acc3.name);
    printf("\n\n");
    return 0;
}
