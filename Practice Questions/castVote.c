/*
    WAP to ask for age as a input and display whether the user can cast vost or not.
*/
#include<stdio.h>

int main(){
    int currAge;

    printf("Enter age : ");
    scanf("%d", &currAge);

    if(currAge >= 18){
        printf("You can cast vote.");
    }else{
        printf("Sorry! you can't cast vote.");
    }
    return 0;
}