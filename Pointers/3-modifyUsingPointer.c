/*
    In this file, we'll modify the value of variable using a pointer.
*/
#include<stdio.h>

int main(){
    int var = 100, *varPtr;

    varPtr = &var;

    printf("BEFORE : \n");
    printf("Value of var : %d\n", var);
    printf("Value of *varPtr : %d\n", *varPtr);

    //To update/modify value we use dereference operator.
    *varPtr = *varPtr + 1;

    //Now print modifiedd value;
    printf("\nAFTER : \n");
    printf("Value of var : %d\n", var);
    printf("Value of *varPtr : %d\n", *varPtr);
    
    return 0;
}
