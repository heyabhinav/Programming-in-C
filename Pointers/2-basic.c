/*
    All pointer whether int, float or any datatype are of same size, irrespective of the data they are
    pointing to.

    REASON: Since pointers store addresses of other variables which stores value, these values can be of
            variable size but the address where they are stored are gonna be of same number of bits/bytes,
            and these addresses are value of pointer type.
            That's why size of pointer are same.

    We'll verify this statement in the following code.

    OUTPUT on system(x64 bit) of code below is:
        Size of integer type : 4
        Size of float type : 4
        Size of double type : 4
        Size of long type : 4
        Size of char type : 4 
*/

#include<stdio.h>

int main(){
    char *ptrch;
    int *ptrnum;
    float *ptrfnum;
    double *ptrdnum;
    long *ptrlnum;

    printf("Size of integer type : %d\n", sizeof(ptrnum));
    printf("Size of float type : %d\n", sizeof(ptrfnum));
    printf("Size of double type : %d\n", sizeof(ptrdnum));
    printf("Size of long type : %d\n", sizeof(ptrlnum));
    printf("Size of char type : %d\n", sizeof(ptrch));

    return 0;
}