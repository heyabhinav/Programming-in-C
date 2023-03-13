#include<stdio.h>

int main(){
    int *ptr[10];
    int p=1, q=2, r=3, s=4, t=5;

    ptr[0] = &p; 
    ptr[1] = &q; 
    ptr[2] = &r; 
    ptr[3] = &s; 
    ptr[4] = &t;

    printf("*ptr[2] = %d", *ptr[2]);

    return 0;
}