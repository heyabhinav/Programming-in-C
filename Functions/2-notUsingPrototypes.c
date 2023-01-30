/*
    Functions can be defined either before or after main() function.
    So, FUNCTION DECLARATION can be skipped if FUNCTION IS DEFINED before using it.

    Tip - relate this with file named '1-usingPrototypes.c' present in this directory.
*/

#include<stdio.h>

//FUNCTION DECLARATION and FUNCTION DEFINITION
int sum(int n1, int n2){
    return (n1 + n2);
}

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