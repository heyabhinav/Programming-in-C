/*
    Swap values of 3 variables without using any extra variables.
*/
#include<stdio.h>

int main(){
    int a=1, b=2, c=3;

    printf("Enter value of a, b and c : ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Before : \n a : %d\n b : %d\n c : %d\n", a, b, c);

    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);

    printf("After : \n a : %d\n b : %d\n c : %d\n", a, b, c);

    return 0;
}