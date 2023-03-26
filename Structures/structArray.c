#include<stdio.h>

struct person{
	char *name;
	int age;
	float salary;
};

int main(){
	struct person p[2] = {{"Abhinav", 20, 10000}, {"Someone", 20, 20000}};

	// 	NOT ALLOWED	
	// p[0] = {"Abhinav", 20, 10000};
	// p[1] = {"Someone", 20, 20000};

	printf("Name : %s, Age: %d, Salary: %.2f\n", p[0].name, p[0].age, p[0].salary);
	printf("Name : %s, Age: %d, Salary: %.2f\n", p[1].name, p[1].age, p[1].salary);
	
	return 0;
}


