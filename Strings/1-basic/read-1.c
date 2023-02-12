/*
    Reading string using 'scanf()'.
*/

#include<stdio.h>

int main(){
    char name[20];

    printf("Enter name : ");
    scanf("%s", &name);

    printf("Name : %s", name);
    
    return 0;
}