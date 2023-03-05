/*
    In this file, we'll see how to increment the value to which pointer is pointing.
    You may have guessed this -> *ptr++
    But, it will not give the result you anticipate.
    Because, '++' operator has greater precedence than '*'.
    which means, '*ptr++' operation will
    1) Increase the address 'ptr' is pointing to and then,
    2) it will access the value at that address, which may be some garbage value.

    What we should do instead is '(*ptr)++'.

    Lets understand this through code.
*/

#include<stdio.h>

int main(){
    int num, *ptr;

    num = 100;

    ptr = &num;

    printf("Value of num : %d\n", num);
    printf("Value of ptr : %d\n", ptr);

    *ptr++;

    printf("\nVALUES AFTER '*ptr++'\n");
    printf("Value of num : %d\n", num);
    printf("Value of ptr : %d\n", ptr);


    *ptr--; //DECREASING TO POINT TO THE INITIAL STATE.
    (*ptr)++;

    printf("\nVALUES AFTER '(*ptr)++'\n");
    printf("Value of num : %d\n", num);
    printf("Value of ptr : %d\n", ptr);

    return 0;
}