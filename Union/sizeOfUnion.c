/*
    The size of the union is the size of max size of its elements.
*/
#include<stdio.h>

union d1{
    int x;
    char ch;
};

union d2{
    int x;
    char ch;
    double f;
};

int main(){
    union d1 u1;
    printf("Size of d1 : %d\n", sizeof(u1));

    union d2 u2;
    printf("Size of d2 : %d", sizeof(u2));
    return 0;
}