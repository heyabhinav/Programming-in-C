/*
Check the give number is odd or even without using any arithmatic operator.
Use Bitwise AND(&) to check.
*/
#include<stdio.h>

int main(){

    int num;

    printf("Enter number : ");
    scanf("%d", &num);

    if(num & 1){
        printf("Odd");
    }
    else{
        printf("Even");
    }
    return 0;
}