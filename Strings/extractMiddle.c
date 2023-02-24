/*
    WAP to extract n characters of a string from middle.

    Enter string : ABCDEFGHIJKLMNOPQRSTUVWXYZ
    Enter starting position : 12
    Enter number of characters to be copied : 5

    Sub-string is : MNOPQ
*/

#include<stdio.h>

int main(){
    char string[100], subStr[100];
    int start=0, length=0;
    
    printf("Enter string : ");
    gets(string);

    printf("Enter starting position : ");
    scanf("%d", &start);

    printf("Enter number of characters to be copied : ");
    scanf("%d", &length);

    int i = start, j=0;

    while(string[i] != '\0' && length>0){
        subStr[j] = string[i];
        i++;
        j++;
        length--;
    }

    subStr[j] = '\0';

    printf("\nSub-string is : %s", subStr);

    return 0;
}