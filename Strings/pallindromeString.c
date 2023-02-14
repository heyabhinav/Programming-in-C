/*
    WAP to take string as a input and check whether the given string is pallindrome or not.
*/

#include<stdio.h>
#define MAX 100

int main(){

    char str[MAX], strCpy[MAX];

    printf("Enter string : ");
    gets(str);

    int size=0;

    for(int i=0; str[i]!='\0'; i++){
        size++;
    }

    int start = 0;
    while(start <= size-1){
        if(str[start] != str[size-1]){
            printf("Not Palindrome.");
            return 0;
        }
        start++;
        size--;
    }
    printf("Palindrome.");

    return 0;
}