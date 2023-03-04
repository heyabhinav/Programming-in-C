/*
    C allows to compare pointers by using relational operators in expression.
    For example,
        p1 > p2, p1 == p2, p1 != p2
    these all are valid.

    OUTPUT OF THE FOLLOWING CODE ON MY SYSTEM IS

    Value of p1 : 6422212	 Value at 6422212 : 10
    Value of p2 : 6422208	 Value at 6422208 : 20
    p1 is greater than p2

    --> Although p1 is pointing to value 10 but still output shows that pointer p1 is greater than p2.
        This shows that, it is not good practice to compare two pointers until you know what you are doing.
*/

#include<stdio.h>

int main(){
    int num1, num2, *p1, *p2;

    num1 = 10;
    num2 = 20;

    p1 = &num1;
    p2 = &num2;

    printf("Value of p1 : %d\t Value at %d : %d\n", p1, p1, num1);
    printf("Value of p2 : %d\t Value at %d : %d\n", p2, p2, num2);
    if(p1 > p2){
        printf("p1 is greater than p2");
    }
    else if(p1 == p2){
        printf("p1 and p2 are equal.");
    }
    else{
        printf("p1 is less than p2");
    }

    return 0;
}