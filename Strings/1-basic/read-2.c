/*
    Reading string using 'gets()'.
*/
#include<stdio.h>

int main(){
    char name[20];

    printf("Enter name : ");
    gets(name);

    printf("Name : %s", name);
    return 0;
}