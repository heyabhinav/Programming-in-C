/*
    WAP to extract n characters of a string from left.

    Enter string : ABCDEFGHIJKLMNOPQRSTUVWXYZ
    Enter number of characters to be copied : 20

    Sub-string is : ABCDEFGHIJKLMNOPQRST
*/

#include<stdio.h>

int main(){
    char string[100], subString[100];
    int n=0;

    printf("Enter string : ");
    gets(string);

    printf("Enter number of characters to be copied : ");
    scanf("%d", &n);

    int i=0;

    while(string[i] != '\0' && i<n){
        subString[i] = string[i];
        i++;
    }

    subString[i] = '\0';

    printf("\nSub-string is : %s", subString);

    return 0;
}