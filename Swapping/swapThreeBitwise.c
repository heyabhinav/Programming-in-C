/*
    Swap values of 3 variables using bitwise operator without any extra variables.

    Example:
        a = 01 = 1
        b = 10 = 2
        c = 11 = 3

        a = 01 ^ 10 ^ 11 = 00 = 0
        b = 00 ^ 10 ^ 11 = 01 = 1
        c = 00 ^ 01 ^ 11 = 10 = 2
        a = 00 ^ 01 ^ 10 = 11 = 3
*/

#include<stdio.h>

int main(){

    int a = 1, b = 2, c = 3;

    printf("Enter value of a, b and c : ");
    scanf("%d %d %d", &a, &b, &c);

    a = a ^ b ^ c;
    b = a ^ b ^ c;
    c = a ^ b ^ c;
    a = a ^ b ^ c;

    printf("After : \n a : %d\n b : %d\n c : %d\n", a, b, c);

    return 0;
}