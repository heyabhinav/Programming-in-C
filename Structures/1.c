/*
    WAP to create a new datatype from existing datatypes which store name, age and salary of a person.
*/

#include<stdio.h>

struct person{
    char *name;
    int age;
    float salary;
};

int main(){
    struct person p1;

    p1.name = "Abhinav";
    p1.age = 19;
    p1.salary = 25000.0;

    printf("Name_1 : %s, Age_1 : %d, Salary_1 : %.2f\n", p1.name, p1.age, p1.salary);


    struct person p2 = {"Someone_you_love", 19, 1000000};

    printf("Name_2 : %s, Age_2 : %d, Salary_2 : %.2f", p2.name, p2.age, p2.salary);

    return 0;
}