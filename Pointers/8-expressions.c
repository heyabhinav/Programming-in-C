#include<stdio.h>

int main(){
    int num1=2, num2=3, sum=0, mul=0;
    float div=1;

    int *p1, *p2;

    p1 = &num1;
    p2 = &num2;

    sum = *p1 + *p2;
    mul = *p1 * *p2;
    div = (float) *p2 / *p1;

    printf("Sum = %d\nMultiplication = %d\nDivision = %.2f\n", sum, mul, div);

    return 0;
}