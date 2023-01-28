/*
Swap values of two integer variable without using extra variable.
Swap using Bitwise operator. Use XOR(^).
*/
#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a = %d, b = %d", a, b);

    return 0;
}
