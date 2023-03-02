/*
    Here, we'll see how two pointer can point to same variables.

    We can store address in pointers by reference operater(&) in both the pointers variable,
    or, we can copy the address from one pointer to another pointer.

    For example,
        *p1, *p2; //pointer variable
        p1 = &num;
        p2 = p1;

    Now, p2 also points to num.
*/

#include<stdio.h>

int main(){
    int num, *ptr1, *ptr2;
    num = 100;

    ptr1 = &num;
    ptr2 = ptr1;

    printf("Value of \n num : %d, \n*ptr1 : %d, \n*ptr2 : %d \n\n", num, *ptr1, *ptr2);

    printf("Address of \n num : %x, \n*ptr1 : %x, \n*ptr2 : %x \n", &num, ptr1, ptr2);

    return 0;
}