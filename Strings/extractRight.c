/*
    WAP to extract n characters of a string from right.

    Enter string : ABCDEFGHIJKLMNOPQRSTUVWXYZ
    Enter number of characters to be copied : 3

    Sub-string is : XYZ
*/

#include<stdio.h>
#include<string.h>

int main(){
    char string[100], subStr[100];
    int n=0;

    printf("Enter string : ");
    gets(string);

    printf("Enter number of characters to be copied : ");
    scanf("%d", &n);

    int j=0, i = strlen(string)-n;
    while(string[i] != '\0'){
        subStr[j++] = string[i++];
    }

    subStr[j] = '\0';

    printf("\nSub-string is : %s", subStr);

    return 0;
}