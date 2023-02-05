/*
    WAP to check the number is palindrome or not?

    What is Palindrome number?
    -Palindrome number is such number which when reversed is equal to the original number.
    
    For example: 2, 212, 12321, 2002 etc

*/

#include<stdio.h>

int main(){
    
    int num, newNum=0;

    printf("Enter number : ");
    scanf("%d", &num);

    int copyNum = num;

    while(num != 0){
        int rem = num % 10;
        newNum = (newNum*10) + rem;
        num = num / 10;
    }

    if(copyNum == newNum){
        printf("It is Palindrome.");
    }else{
        printf("It is not Palindrome.");
    }

    return 0;
}