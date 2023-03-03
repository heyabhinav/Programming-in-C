/*
    Here we'll discuss about increment & decrement operation on pointers.

    Like any other variable, when pointer variable can be increment or decrement. The difference here
    will be that, if incremented then, pointer will start to next memory address to that of it was pointing.
    Same goes with decrement also, pointer will point to previous address.

    NOTE: The address stored in pointer variable will change/modify, not the value stored at that address.
*/

#include<stdio.h>

int main(){
    int num, *ptr;

    num = 100;
    ptr = &num;

    printf("BEFORE INCREMENT: \n");
    printf("Address of num : %d\n", &num);
    printf("Value of num : %d\n", num);
    printf("Value of ptr : %d\n", ptr);

    //POST INCREMENT
    ptr++;

    printf("\nAFTER INCREMENT: \n");
    printf("Address of num : %d\n", &num);
    printf("Value of num : %d\n", num);
    printf("Value of ptr : %d\n", ptr);

    //POST DECREMENT
    ptr--;

    printf("\nAFTER DECREMENT: \n");
    printf("Address of num : %d\n", &num);
    printf("Value of num : %d\n", num);
    printf("Value of ptr : %d\n", ptr);
    return 0;
}