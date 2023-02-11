/*
    WAP to find the biggest of three integer using functions.
*/
#include<stdio.h>

int greater(int a, int b, int c){
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    return c;
}

int main(){
    int num1, num2, num3, largest;

    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Enter third number : ");
    scanf("%d", &num3);

    largest = greater(num1, num2, num3);

    printf("Largest number is : %d", largest);

    return 0;
}