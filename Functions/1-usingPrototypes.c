#include<stdio.h>

// Function Declaration / Function Prototype
int sum(int a, int b);

int main(){
    int a, b, res = 0;

    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    res = sum(a,b);

    printf("Sum of %d and %d is %d", a, b, res);

    return 0;
}

// Function Definition
int sum(int n1, int n2) // Function Header
{  
    return (n1+n2);     // Function Body
}