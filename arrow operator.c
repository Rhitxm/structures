#include<stdio.h>
#include<string.h> 

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){

    struct student *ptr=&s1;
    printf("student name: %s\n", ptr-> name);

    return 0;
}

//printing real and imaginary part of complex number using arrow operator

#include <stdio.h>
#include<string.h>
struct complex{
    int real;
    int img;
};
int main(){
    struct complex number1={5, 8};
    struct complex *ptr= &number1;
    printf("real part=%d\n", ptr->real);
    printf("imaginary part= %d\n", ptr->img);
    return 0;
}
